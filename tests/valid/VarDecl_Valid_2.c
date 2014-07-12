#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
Any x1x_g ( Any );
Any x1x_f ( Any );

Any x1x_g ( Any a0 ){
  Any a4 = a0;
  Any a3 = toStr ( a4 );
  return a3;
}

Any x1x_f ( Any a0 ){
  Any a5 = Int(1);
  Any a6 = wyce_add( a0 , a5);
  Any a11 = Int(1);
  Any a7 = x1x_g ( a6 );
  return a7;
}

int main (){
  Any a5 = Int(1);
  Any a8 = Int(0);
  Any a4 = x1x_f ( a5 );
  println ( a4 );
  return 0;
}
