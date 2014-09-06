import * from pid

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

//Fancier version // Matt note - used below x3
//#define TRUNCATE_SINT16(out, in) (out = (in<INT16_MIN)?INT16_MIN:((in>INT16_MAX)?INT16_MAX:in) )

//Better semantic // Matt note - not needed?
//#define SATURATE_SINT16(in) ( (in<INT16_MIN)?INT16_MIN:((in>INT16_MAX)?INT16_MAX:in) )

/* declarations moved to stabilizer code, to avoid use of globals
native PidObject pidRollRate
native PidObject pidPitchRate
native PidObject pidYawRate
native PidObject pidRoll
native PidObject pidPitch
native PidObject pidYaw

//int rollOutput; //int16_t
//int pitchOutput; //int16_t
//int yawOutput; //int16_t
*/


//== Tests ==
native method getControllerIsInit() => bool
native method isControllerInit() => bool

public method controllerInit([&PidObject] pidArray) => void:
  if(isControllerInit()):
    return

  pidInit(pidArray[0], 0.0, 70.0,  0.0, 0.0, (1.0/500.0)) // pidRollRate
  pidInit(pidArray[1], 0.0, 70.0,  0.0, 0.0, (1.0/500.0)) // pidPitchRate
  pidInit(pidArray[2], 0.0, 50.0, 25.0, 0.0, (1.0/500.0)) // pidYawRate
  pidSetIntegralLimit(pidArray[0], 100.0) // pidRollRate
  pidSetIntegralLimit(pidArray[1], 100.0) // pidPitchRate
  pidSetIntegralLimit(pidArray[2], 500) // pidYawRate

  pidInit(pidArray[3], 0.0, 3.5, 2.0, 0.0, (1.0/500.0)) // pidRoll
  pidInit(pidArray[4], 0.0, 3.5, 2.0, 0.0, (1.0/500.0)) // pidPitch
  pidInit(pidArray[5], 0.0, 0.0, 0.0, 0.0, (1.0/500.0)) // pidYaw
  pidSetIntegralLimit(pidArray[3], 20.0) // pidRoll
  pidSetIntegralLimit(pidArray[4], 20.0) // pidPitch
  pidSetIntegralLimit(pidArray[5], 360.0) // pidYaw

public method controllerTest() => bool:
  return getControllerIsInit()

// Work-around a Whiley bug, replace with *x = y when fixed
method dereferenceEq(&int x, int y):
	return
method dereferenceEqReal(&real x, real y):
	return

public method controllerCorrectAttitudePID(
       real eulerRollActual, real eulerPitchActual, real eulerYawActual,
       real eulerRollDesired, real eulerPitchDesired, real eulerYawDesired,
       &real rollRateDesired, &real pitchRateDesired, &real yawRateDesired,
       &PidObject pidRoll, &PidObject pidPitch, &PidObject pidYaw) => void:

  pidSetDesired(pidRoll, eulerRollDesired)
  dereferenceEqReal(rollRateDesired, pidUpdate(pidRoll, eulerRollActual, true))

  // Update PID for pitch axis
  pidSetDesired(pidPitch, eulerPitchDesired)
  dereferenceEqReal(pitchRateDesired, pidUpdate(pidPitch, eulerPitchActual, true))

  // Update PID for yaw axis
  real yawError
  yawError = eulerYawDesired - eulerYawActual
  if (yawError > 180.0):
    yawError = yawError - 360.0
  else if (yawError < -180.0):
    yawError = yawError + 360.0
  pidSetError(pidYaw, yawError)
  dereferenceEqReal(yawRateDesired, pidUpdate(pidYaw, eulerYawActual, false))


public method controllerCorrectRatePID(
	   [real] gyro,                 // actual roll, pitch, yaw
       real rollRateDesired, real pitchRateDesired, real yawRateDesired,
       &int rollOutput, &int pitchOutput, &int yawOutput,
       &PidObject pidRollRate, &PidObject pidPitchRate, &PidObject pidYawRate) => void:

  int result
  // ROLL
  pidSetDesired(pidRollRate, rollRateDesired)
  result = Math.floor( pidUpdate(pidRollRate, gyro[0], true))
  if ( result < -32768):         /////////
    dereferenceEq(rollOutput, -32768)
  else:
    if ( result > 32768):
      dereferenceEq(rollOutput, 32768)
    else:
      dereferenceEq(rollOutput, result)

  // PITCH
  pidSetDesired(pidPitchRate, pitchRateDesired)
  result = Math.floor( pidUpdate(pidPitchRate, -(gyro[1]), true))
  if ( result < -32768):
    dereferenceEq(pitchOutput, -32768)
  else:
    if ( result > 32768):
      dereferenceEq(pitchOutput, 32768)
    else:
      dereferenceEq(pitchOutput, result)

  // YAW
  pidSetDesired(pidYawRate, yawRateDesired)
  result = Math.floor( pidUpdate(pidYawRate, gyro[2], true))
  if ( result < -32768):
    dereferenceEq(yawOutput, -32768)
  else:
    if ( result > 32768):
      dereferenceEq(yawOutput, 32768)
    else:
      dereferenceEq(yawOutput, result)


public method controllerResetAllPID([&PidObject] pidArray) => void:
  pidReset(pidArray[0]) //&pidRoll)
  pidReset(pidArray[1]) //&pidPitch)
  pidReset(pidArray[2]) //&pidYaw)
  pidReset(pidArray[3]) //&pidRollRate)
  pidReset(pidArray[4]) //&pidPitchRate)
  pidReset(pidArray[5]) //&pidYawRate)

// made redundent by putting output variables in stabilizer method
//method controllerGetActuatorOutput(&int roll, &int pitch, &int yaw) => void:
//  dereferenceEq(roll, rollOutput)
//  dereferenceEq(pitch, pitchOutput)
//  dereferenceEq(yaw, yawOutput)
