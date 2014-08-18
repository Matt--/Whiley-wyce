#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
Any x1x_g ( Any  );

Any x1x_g ( Any a0 ){
  Any a4 = Real(3);
  Any a7 = Real(0);
  Any a5 = wyce_div( a0, a4);
  Any a10 = Real(0.166666666666668);
  return a5;
}

int main (){
  Any a6 = Real(0.234);
  Any a9 = Real(0.5);
  Any a5 = x1x_g ( a6 );
  Any a4 = toStr ( a5 );
  println ( a4 );
  return 0;
}
