#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
Any x1x_f ( Any );

Any x1x_f ( Any a0 ){
  Any a4 = wyce_neg(a0);
  Any a9 = Real(0);
  return a4;
}

int main (){
  Any a6 = Real(1.2);
  Any a9 = Real(0);
  Any a5 = x1x_f ( a6 );
  Any a4 = toStr ( a5 );
  println ( a4 );
  Any a12 = Real(0.00001);
  Any a15 = Real(0);
  Any a11 = x1x_f ( a12 );
  Any a10 = toStr ( a11 );
  println ( a10 );
  Any a18 = Real(5632);
  Any a21 = Real(0);
  Any a17 = x1x_f ( a18 );
  Any a16 = toStr ( a17 );
  println ( a16 );
  return 0;
}
