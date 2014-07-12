#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
Any x1x_f ( Any );

Any x1x_f ( Any a0 ){
  Any a3 = Real(0.0);
  Any a5 = wyce_sub( a3 , a0);
  Any a10 = Real(-0.2);
  return a5;
}

int main (){
  Any a6 = Real(1.234);
  Any a9 = Real(0.2345);
  Any a5 = x1x_f ( a6 );
  Any a4 = toStr ( a5 );
  println ( a4 );
  return 0;
}
