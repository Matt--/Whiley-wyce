#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
Any x1x_g ( Any );
Any x1x_f ( Any );

Any x1x_g ( Any a0 ){
  Any a2 = a0;
  Any a1 = toStr ( a2 );
  return a1;
}

Any x1x_f ( Any a0 ){
  Any a3 = Int(1);
  Any a4 = wyce_add( a0 , a3);
  Any a5 = x1x_g ( a4 );
  return a5;
}

int main (){
  Any a5 = Int(1);
  Any a4 = x1x_f ( a5 );
  println ( a4 );
  return 0;
}
