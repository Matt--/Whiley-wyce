import whiley.lang.System

type PidObject is {
    real desired,
    real error
    }

method pidInit(&PidObject pid) => void:
    pid->error = 1.0
    
method main(System.Console sys) => void:
    &PidObject pid = new {desired: 0.0, error: 0.0}
    
    sys.out.println(pid->error) // value before passing the reference
    pidInit(pid) 
    sys.out.println(pid->error) // value after passing the reference

