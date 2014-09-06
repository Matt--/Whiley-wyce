import whiley.lang.System
import * from controller
//import PidObject from pid

//==================================================
// pid model -- a record
public type PidObject is {
    real desired,
    real error,
    real prevError,
    real integ,
    real deriv,
    real kp,
    real ki,
    real kd,
    real outP,
    real outI,
    real outD,
    real iLimit,
    real iLimitLow,
    real dt
    }
//== end pid model ==

//== Tests ==
native method motorsTest() => bool
native method imu6Test() => bool
native method sensfusion6Test() => bool
//native method controllerTest() => bool

//== Initialize ==
native method motorsInit()
native method imu6Init()
native method sensfusion6Init()
//native method controllerInit([&PidObject] pidArray)
native method isStabilizerInit() => bool

//== Simple methods, no parameters ==
native method systemWaitStart()
native method cf_lib_xTaskGetTickCount() => int
native method imu6IsCalibrated() => bool
//native method controllerResetAllPID()

native method cf_lib_LHS_Equals_Neg_RHS( &real yawRateDesired, &real eulerYawDesired)

//==============
//== FreeRTOS ==
  // portBASE_TYPE xTaskCreate( pdTASK_CODE pvTaskCode, const char * const pcName, unsigned short usStackDepth, void *pvParameters, unsigned portBASE_TYPE uxPriority, xTaskHandle *pvCreatedTask );
native method cf_lib_xTaskCreate(method() => void stabilizerTask, string b, int c, int d, int e, int f) => void

  // void vTaskSetApplicationTaskTag( xTaskHandle xTask, pdTASK_HOOK_CODE pxHookFunction ) PRIVILEGED_FUNCTION;
  // typedef void * xTaskHandle;
  // pdTASK_HOOK_CODE is used as a void*, replace with void* ?
native method cf_lib_vTaskSetApplicationTaskTag(int p, int taskStabilizerIdNmr)

  //void vTaskDelayUntil( portTickType * const pxPreviousWakeTime, portTickType xTimeIncrement ) PRIVILEGED_FUNCTION;
native method cf_lib_vTaskDelayUntil( int lastWakeTime, int xTimeIncrement ) => int

//====================
//== i/o operations ==
  //void imu9Read(Axis3f* gyroOut, Axis3f* accOut, Axis3f* magOut);
native method cf_lib_imu9Read( &[real] gyro, &[real]_acc, &[real] mag) //done

  //void sensfusion6UpdateQ(float gx, float gy, float gz, float ax, float ay, float az, float dt);
native method cf_lib_sensfusion6UpdateQ( &[real] gyro, &[real] acc, real dt)

  //void sensfusion6GetEulerRPY(float* roll, float* pitch, float* yaw);
native method sensfusion6GetEulerRPY( &real eulerRollActual, &real eulerPitchActual, &real eulerYawActual) //done

//==============
//== Firmware ==
//== controller.c ==
//void controllerCorrectAttitudePID(
  //       float eulerRollActual, float eulerPitchActual, float eulerYawActual,
  //       float eulerRollDesired, float eulerPitchDesired, float eulerYawDesired,
  //       float* rollRateDesired, float* pitchRateDesired, float* yawRateDesired);
//native method controllerCorrectAttitudePID( real eulerRollActual, real eulerPitchActual, real eulerYawActual, real eulerRollDesired, real eulerPitchDesired, real eulerYawDesired, &real rollRateDesired, &real pitchRateDesired, &real yawRateDesired)

//void controllerCorrectRatePID(
  //       float rollRateActual, float pitchRateActual, float yawRateActual,
  //       float rollRateDesired, float pitchRateDesired, float yawRateDesired);
//native method cf_lib_controllerCorrectRatePID( &[real] gyro, &real rollRateDesired, &real pitchRateDesired, &real yawRateDesired)

  //void controllerGetActuatorOutput(&actuatorRoll, &actuatorPitch, &actuatorYaw)
//native method cf_lib_controllerGetActuatorOutput( &int actuatorRoll, &int actuatorPitch, &int actuatorYaw)

//== commander.c ==
  //void commanderGetThrust(uint16_t* thrust);
native method cf_lib_commanderGetThrust(&int actuatorThrust) => void // done
  //void commanderGetRPY(float* eulerRollDesired, float* eulerPitchDesired, float* eulerYawDesired);
native method commanderGetRPY(&real eulerRollDesired, &real eulerPitchDesired, &real eulerYawDesired)

  //void commanderGetRPYType(RPYType* rollType, RPYType* pitchType, RPYType* yawType);
native method cf_lib_commanderGetRPYType(&string rollType, &string pitchType, &string yawType)

native method cf_lib_motorsSetRatio(int motor, int power)

//======================================================================================
export method stabilizerTest() => bool:
  bool pass = true

  pass = pass && motorsTest()
  pass = pass && imu6Test()
  pass = pass && sensfusion6Test()
  pass = pass && controllerTest()
  return pass

//======================================================================================
export method stabilizerInit() => void:
  if(isStabilizerInit()):
    return

  motorsInit()
  imu6Init()
  sensfusion6Init()
  // controllerInit() // moved to after pid initialisations below ~ln 130

  // create the stabilizer task. Places the task into the FreeRTOS task que/s.
  cf_lib_xTaskCreate(&stabilizerTask, /*(const signed char * const)*/ "STABILIZER", 200, /*null*/0, /*Piority*/2, /*null*/0)

//======================================================================================
// This sets up and contains the loop that the stabilzer task runs
method stabilizerTask() => void:
  //========= INITIALISE =============
  &[real] gyro = new [0.0, 0.0, 0.0]
  &[real] acc  = new [0.0, 0.0, 0.0]
  &[real] mag  = new [0.0, 0.0, 0.0]

  &real eulerRollActual   = new 0.0
  &real eulerPitchActual  = new 0.0
  &real eulerYawActual    = new 0.0
  &real eulerRollDesired  = new 0.0
  &real eulerPitchDesired = new 0.0
  &real eulerYawDesired   = new 0.0
  &real rollRateDesired   = new 0.0
  &real pitchRateDesired  = new 0.0
  &real yawRateDesired    = new 0.0

  &string rollType  = new "ANGLE"
  &string pitchType = new "ANGLE"
  &string yawType   = new "ANGLE"

  &int actuatorThrust = new 0 // was uint16
  &int actuatorRoll   = new 0 // was int16
  &int actuatorPitch  = new 0
  &int actuatorYaw    = new 0

  int attitudeCounter = 0 // was uint32_t
  int lastWakeTime // was uint32_t

  //=============================
  // Refactored controller code.
  // Object declarations and controllerInit() inserted here to use stack declaractions
  // and avoid issues with globals and heap declarations.

  &PidObject pidRollRate  = new { desired: 0.0, error: 0.0, prevError: 0.0, integ: 0.0, deriv: 0.0, kp: 0.0, ki: 0.0, kd: 0.0, outP: 0.0, outI: 0.0, outD: 0.0, iLimit: 0.0, iLimitLow: 0.0, dt: 0.0}
  &PidObject pidPitchRate = new { desired: 0.0, error: 0.0, prevError: 0.0, integ: 0.0, deriv: 0.0, kp: 0.0, ki: 0.0, kd: 0.0, outP: 0.0, outI: 0.0, outD: 0.0, iLimit: 0.0, iLimitLow: 0.0, dt: 0.0}
  &PidObject pidYawRate   = new { desired: 0.0, error: 0.0, prevError: 0.0, integ: 0.0, deriv: 0.0, kp: 0.0, ki: 0.0, kd: 0.0, outP: 0.0, outI: 0.0, outD: 0.0, iLimit: 0.0, iLimitLow: 0.0, dt: 0.0}
  &PidObject pidRoll      = new { desired: 0.0, error: 0.0, prevError: 0.0, integ: 0.0, deriv: 0.0, kp: 0.0, ki: 0.0, kd: 0.0, outP: 0.0, outI: 0.0, outD: 0.0, iLimit: 0.0, iLimitLow: 0.0, dt: 0.0}
  &PidObject pidPitch     = new { desired: 0.0, error: 0.0, prevError: 0.0, integ: 0.0, deriv: 0.0, kp: 0.0, ki: 0.0, kd: 0.0, outP: 0.0, outI: 0.0, outD: 0.0, iLimit: 0.0, iLimitLow: 0.0, dt: 0.0}
  &PidObject pidYaw       = new { desired: 0.0, error: 0.0, prevError: 0.0, integ: 0.0, deriv: 0.0, kp: 0.0, ki: 0.0, kd: 0.0, outP: 0.0, outI: 0.0, outD: 0.0, iLimit: 0.0, iLimitLow: 0.0, dt: 0.0}

  [&PidObject] pidArray = [pidRollRate, pidPitchRate, pidYawRate, pidRoll, pidPitch, pidYaw]

  // not used, use actuator roll, pitch, yaw instead
 //&int rollOutput  = new 0 //int16_t
 // &int pitchOutput = new 0 //int16_t
 // &int yawOutput   = new 0 //int16_t

  controllerInit(pidArray)

  //== end refactored controller code ==

  cf_lib_vTaskSetApplicationTaskTag(0, /*TASK_STABILIZER_ID_NBR*/3) // FreeRTOSConfig.h #define TASK_STABILIZER_ID_NBR  3

  systemWaitStart()

  lastWakeTime = cf_lib_xTaskGetTickCount()

  //========= START LOOP =============
  while(true):
    //vTaskDelayUntil(&lastWakeTime, (unsigned int)((/*configTICK_RATE_HZ*/ /*( portTickType ) cast to short*/ 1000 / /*IMU_UPDATE_FREQ*/500)) ); // 500Hz
    lastWakeTime = cf_lib_vTaskDelayUntil(lastWakeTime, 2)

    cf_lib_imu9Read(gyro, acc, mag)

    if(imu6IsCalibrated()):
      commanderGetRPY(eulerRollDesired, eulerPitchDesired, eulerYawDesired)

      cf_lib_commanderGetRPYType(rollType, pitchType, yawType)

      attitudeCounter = attitudeCounter + 1
      if(attitudeCounter >= 2):
        real fusion_update_dt = 1.0/(500.0 / 2.0)
        cf_lib_sensfusion6UpdateQ( gyro, acc, fusion_update_dt)
        sensfusion6GetEulerRPY(eulerRollActual, eulerPitchActual, eulerYawActual)

        controllerCorrectAttitudePID(
        	*eulerRollActual, *eulerPitchActual, *eulerYawActual,
        	*eulerRollDesired, *eulerPitchDesired, -(*eulerYawDesired),
        	rollRateDesired, pitchRateDesired, yawRateDesired,
        	pidRoll, pidPitch, pidYaw)

        attitudeCounter = 0

      // dropped several redundent if statements
      cf_lib_LHS_Equals_Neg_RHS( yawRateDesired, eulerYawDesired )

      controllerCorrectRatePID(
      	*gyro,
      	*rollRateDesired, *pitchRateDesired, *yawRateDesired,
      	actuatorRoll, actuatorPitch, actuatorYaw,
      	pidRollRate, pidPitchRate, pidYawRate
      	)
/////////////
//      cf_lib_controllerGetActuatorOutput(actuatorRoll, actuatorPitch, actuatorYaw)

      cf_lib_commanderGetThrust(actuatorThrust)

      if((*actuatorThrust) > 0):
        distributePower(*actuatorThrust, *actuatorRoll, *actuatorPitch, -(*actuatorYaw))
      else:
        distributePower(0, 0, 0, 0)
        controllerResetAllPID(pidArray)

  //========= END LOOP =============

//======================================================================================
method distributePower(int thrust, int roll, int pitch, int yaw): // takes uint16
  int motorPowerM1 = limitThrust(thrust + pitch + yaw)
  int motorPowerM2 = limitThrust(thrust - roll - yaw)
  int motorPowerM3 = limitThrust(thrust - pitch + yaw)
  int motorPowerM4 = limitThrust(thrust + roll - yaw)

  cf_lib_motorsSetRatio(/*MOTOR_M1*/0, motorPowerM1)
  cf_lib_motorsSetRatio(/*MOTOR_M2*/1, motorPowerM2)
  cf_lib_motorsSetRatio(/*MOTOR_M3*/2, motorPowerM3)
  cf_lib_motorsSetRatio(/*MOTOR_M4*/3, motorPowerM4)

//======================================================================================
method limitThrust(int v) => int: // converts an uint32 to a uint16
  int value = v
  int uint16_Max = 65535
  if(value > uint16_Max):
    value = uint16_Max
  else if(value < 0):
    value = 0
  return value

