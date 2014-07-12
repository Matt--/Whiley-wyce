#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
Any* x1x_f ( Any );

Any* x1x_f ( Any a0 ){
  Any a1 = a0;
  a1.type = 
  return a1;
}

int main (){
  Any a6 = Str("Hello World");
  Any *a5 = x1x_f ( a6 );
  Any a4 = toStr ( a5 );
  println ( a4 );
  return 0;
}
