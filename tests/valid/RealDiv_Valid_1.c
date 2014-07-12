#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
Any x1x_g ( Any );
Any x1x_f ( Any , Any );

Any x1x_g ( Any a0 ){
  Any a1 = a0;
  a1.type = REAL_TYPE;
  Any a9999 = Int(a1.i);
  a1.r = (double) a9999.i;
  Any a2 = Real(3.0);
  Any a4 = Real(0);
  Any a3 = wyce_div( a1 , a2);
  return a3;
}

Any x1x_f ( Any a0, Any a1 ){
  Any a7 = x1x_g ( a0 );
  Any a6 = toStr ( a7 );
  return a6;
}

int main (){
  Any a5 = Int(1);
  Any a6 = Int(2);
  Any a10 = Int(0);
  Any a12 = Int(0);
  Any a4 = x1x_f ( a5, a6 );
  println ( a4 );
  return 0;
}
