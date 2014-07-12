#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
Any x1x_f ( Any );

Any x1x_f ( Any a0 ){
  Any a5 = a0;
  Any a2 = Int(1);
  Any a3 = wyce_add( a0 , a2);
  return a3;
}

int main (){
  Any a3 = Int(1);
  Any a2 = x1x_f ( a3 );
  Any a1 = a2;
  Any a8 = a1;
  Any a7 = toStr ( a8 );
  println ( a7 );
  return 0;
}
