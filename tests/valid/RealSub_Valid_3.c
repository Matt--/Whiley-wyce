#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
Any x1x_suber ( Any , Any , Any );

Any x1x_suber ( Any a0, Any a1, Any a2 ){
  Any a5 = wyce_sub( a0 , a1);
  Any a7 = wyce_sub( a5 , a2);
  return a7;
}

int main (){
  Any a6 = Real(1.2);
  Any a7 = Real(3.4);
  Any a8 = Real(4.5);
  Any a5 = x1x_suber ( a6, a7, a8 );
  Any a4 = toStr ( a5 );
  println ( a4 );
  Any a14 = Real(1000);
  Any a15 = Real(300);
  Any a16 = Real(400);
  Any a13 = x1x_suber ( a14, a15, a16 );
  Any a12 = toStr ( a13 );
  println ( a12 );
  return 0;
}
