#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
Any x1x_g ( Any );

Any x1x_g ( Any a0 ){
  Any a2 = Real(3);
  Any a4 = Real(0);
  Any a3 = wyce_div( a0 , a2);
  return a3;
}

int main (){
  Any a6 = Real(0.234);
  Any a5 = x1x_g ( a6 );
  Any a4 = toStr ( a5 );
  println ( a4 );
  return 0;
}
