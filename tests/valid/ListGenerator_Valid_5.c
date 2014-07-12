#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
Any x1x_f ( Any[] );

Any x1x_f ( Any a0[] ){
  Any a3 = Int( sizeof( a0 ) / sizeof( a0[0] ) );
  Any a1 = toStr ( a3 );
  return a1;
}

int main (){
  Any a7 [10];
  Any a6 = x1x_f ( a7 );
  println ( a6 );
  return 0;
}
