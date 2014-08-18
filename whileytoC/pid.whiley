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
export function pidInit(PidObject pid, real desired, real kp, real ki, real kd, real dt) => PidObject:
    pid.error      = 1.0
    pid.prevError  = 0.0
    pid.integ      = 0.0
    pid.deriv      = 0.0
    pid.desired    = desired
    pid.kp         = kp
    pid.ki         = ki
    pid.kd         = kd
    pid.iLimit     = 5000.0
    pid.iLimitLow  = -5000.0
    pid.dt         = dt
    return pid

//==========================================================
// pidUpdate --- main job
export function pidUpdate(PidObject pid, real measured, bool updateError) => real
    requires pid.dt != 0:
    real output
    if(updateError):
        pid.error = pid.desired - measured

    pid.integ = pid.integ + pid.error * pid.dt

    if(pid.integ > pid.iLimit):
        pid.integ = pid.iLimit
    else if(pid.integ < pid.iLimitLow):
        pid.integ = pid.iLimitLow

    pid.deriv = (pid.error - pid.prevError) / pid.dt
    pid.outP = pid.kp * pid.error
    pid.outI = pid.ki * pid.integ
    pid.outD = pid.kd * pid.deriv

    output = pid.outP + pid.outI + pid.outD

    pid.prevError = pid.error

    return output

export function pidIsActive(PidObject pid) => bool:
    bool isActive = true
    if (pid.kp < 0.0001 && pid.ki < 0.0001 && pid.kd < 0.0001):
        isActive = false
    return isActive

//==========================================================
// getters & setters
export function pidSetIntegralLimit(PidObject pid, real limit) => PidObject:
    pid.iLimit = limit
    return pid

export function pidSetIntegralLimitLow(PidObject pid, real limitLow) => PidObject:
    pid.iLimitLow = limitLow
    return pid

export function pidReset(PidObject pid) => PidObject:
    pid.error     = 0.0
    pid.prevError = 0.0
    pid.integ     = 0.0
    pid.deriv     = 0.0
    return pid

export function pidSetError(PidObject pid, real error) => PidObject:
    pid.error = error
    return pid

export function pidSetDesired(PidObject pid, real desired) => PidObject:
    pid.desired = desired
    return pid

export function pidGetDesired(PidObject pid) => real:
    return pid.desired

export function pidSetKp(PidObject pid, real kp) => PidObject:
    pid.kp = kp
    return pid

export function pidSetKi(PidObject pid, real ki) => PidObject:
    pid.ki = ki
    return pid

export function pidSetKd(PidObject pid, real kd) => PidObject:
    pid.kd = kd
    return pid

export function pidSetDt(PidObject pid, real dt) => PidObject:
    pid.dt = dt
    return pid




/*
method main(System.Console sys) => void:
    sys.out.println("hello")
    PidObject pid = {desired: 0.0, error: 0.0, prevError: 0.0, integ: 1.0, deriv: 1.0, kp: 1.0, ki: 1.0, kd: 1.0, outP: 1.0, outI: 1.0, outD: 1.0, iLimit: 1.0, iLimitLow: 1.0, dt: 1.0}

    sys.out.println(pid.error)
    pid = pidInit(pid, 1.0, 1.0, 1.0, 1.0, 1.0)
    sys.out.println(pid.error)
*/
