import whiley.lang.System

method main(System.Console console):
    int a = 1
    int b = 3
    int r = f_add(a, b)
    console.out.println(r)
	// prints 4

function f_add(int x, int y) => int:
    int r = x + y
    return r
