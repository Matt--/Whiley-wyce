#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
Any x1x_divide ( Any , Any );

Any x1x_divide ( Any a0, Any a1 ){
  Any a6;
  a6.type = REAL_TYPE;
  Any a9999 = Int(a1.i);
  a6.r = (double) a9999.i;
  Any a10 = Real(0);
  Any a9 = wyce_div( a0 , a6);
  return a9;
}

int main (){
  Any a4 = Str("10.0 / 2 = ");
  Any a6 = Real(10.0);
  Any a7 = Int(2);
  Any a11 = Int(0);
  Any a5 = x1x_divide ( a6, a7 );
  a5 = toStr ( a5 );
  Any a8 = Str( strcat ( a4.s , a5.s ) );
  println ( a8 );
  Any a12 = Str("10.0 / 3 = ");
  Any a14 = Real(10.0);
  Any a15 = Int(3);
  Any a19 = Int(0);
  Any a13 = x1x_divide ( a14, a15 );
  a13 = toStr ( a13 );
  Any a16 = Str( strcat ( a12.s , a13.s ) );
  println ( a16 );
  return 0;
}
