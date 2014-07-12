#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
Any x1x_f ( Any );

Any x1x_f ( Any a0 ){
  Any a1 = a0;
  a1.type = REAL_TYPE;
  Any a9999 = Int(a1.i);
  a1.r = (double) a9999.i;
  return a1;
}

int main (){
  Any a6 = Int(123);
  Any a5 = x1x_f ( a6 );
  Any a4 = toStr ( a5 );
  println ( a4 );
  return 0;
}
