#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
Any x1x_f ( Any );

Any x1x_f ( Any a0 ){
  Any a4 = Int(1);
  Any a5 = wyce_add( a0 , a4);
  Any a10 = Int(1);
  return a5;
}

int main (){
  Any a5 = Int(9);
  Any a8 = Int(0);
  Any a4 = x1x_f ( a5 );
  println ( a4 );
  return 0;
}
