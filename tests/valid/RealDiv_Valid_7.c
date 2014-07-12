#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
Any x1x_diver ( Any , Any , Any );

Any x1x_diver ( Any a0, Any a1, Any a2 ){
  Any a12 = Real(0);
  Any a9 = wyce_div( a0 , a1);
  a12 = Real(0);
  Any a11 = wyce_div( a9 , a2);
  return a11;
}

int main (){
  Any a6 = Real(1.2);
  Any a7 = Real(3.4);
  Any a8 = Real(4.5);
  Any a13 = Real(0);
  Any a15 = Real(0);
  Any a5 = x1x_diver ( a6, a7, a8 );
  Any a4 = toStr ( a5 );
  println ( a4 );
  Any a14 = Real(1000);
  a15 = Real(300);
  Any a16 = Real(400);
  Any a21 = Real(0);
  Any a23 = Real(0);
  a13 = x1x_diver ( a14, a15, a16 );
  Any a12 = toStr ( a13 );
  println ( a12 );
  return 0;
}
