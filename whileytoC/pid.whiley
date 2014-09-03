import whiley.lang.System

//==================================================
// pid model -- a record
type PidObject is {
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

//==========================================================
// pidInit
export method pidInit(&PidObject pid, real desired, real kp, real ki, real kd, real dt) => void:
    pid->error      = 1.0
    pid->prevError  = 0.0
    pid->integ      = 0.0
    pid->deriv      = 0.0
    pid->desired    = desired
    pid->kp         = kp
    pid->ki         = ki
    pid->kd         = kd
    pid->iLimit     = 5000.0
    pid->iLimitLow  = -5000.0
    pid->dt         = dt

//==========================================================
// pidUpdate --- main job
export method pidUpdate(&PidObject pid, real measured, bool updateError) => real:
	real output
	if(updateError):
		pid->error = pid->desired - measured

	pid->integ = pid->integ + ( pid->error * pid->dt ) //TODO check bodmas

	if(pid->integ > pid->iLimit):
		pid->integ = pid->iLimit
	else if(pid->integ < pid->iLimitLow):
		pid->integ = pid->iLimitLow

	pid->deriv = (pid->error - pid->prevError) / pid->dt
	pid->outP = pid->kp * pid->error
	pid->outI = pid->ki * pid->integ
	pid->outD = pid->kd * pid->deriv

	output = pid->outP + pid->outI + pid->outD

	pid->prevError = pid->error

	return output

export method pidIsActive(&PidObject pid) => bool:
    bool isActive = true
    if (pid->kp < 0.0001 && pid->ki < 0.0001 && pid->kd < 0.0001):
        isActive = false
    return isActive

//==========================================================
// getters & setters
export method pidSetIntegralLimit(&PidObject pid, real limit) => void:
    pid->iLimit = limit

export method pidSetIntegralLimitLow(&PidObject pid, real limitLow) => void:
    pid->iLimitLow = limitLow

export method pidReset(&PidObject pid) => void:
    pid->error     = 0.0
    pid->prevError = 0.0
    pid->integ     = 0.0
    pid->deriv     = 0.0

export method pidSetError(&PidObject pid, real error) => void:
    pid->error = error

export method pidSetDesired(&PidObject pid, real desired) => void:
    pid->desired = desired

export method pidGetDesired(&PidObject pid) => real:
    return pid->desired

export method pidSetKp(&PidObject pid, real kp) => void:
    pid->kp = kp

export method pidSetKi(&PidObject pid, real ki) => void:
    pid->ki = ki

export method pidSetKd(&PidObject pid, real kd) => void:
    pid->kd = kd

export method pidSetDt(&PidObject pid, real dt) => void:
    pid->dt = dt




/*
method main(System.Console sys) => void:
    sys.out.println("hello")
    PidObject pid = {desired: 0.0, error: 0.0, prevError: 0.0, integ: 1.0, deriv: 1.0, kp: 1.0, ki: 1.0, kd: 1.0, outP: 1.0, outI: 1.0, outD: 1.0, iLimit: 1.0, iLimitLow: 1.0, dt: 1.0}

    sys.out.println(pid.error)
    pid = pidInit(pid, 1.0, 1.0, 1.0, 1.0, 1.0)
    sys.out.println(pid.error)
*/
