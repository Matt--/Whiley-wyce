#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
void x1x_f ( Any[] );

void x1x_f ( Any a0[] ){
  Any a6 = Int(0);
  Any a14 = Int(0);
  Any a15 = Int( sizeof( a0 ) / sizeof( a0[0] ) );
  Any a7 = a0[a6.i];
  Any a10 = Int(0);
  a14 = Int(0);
  a15 = Int( sizeof( a0 ) / sizeof( a0[0] ) );
  Any a11 = a0[a10.i];
}

int main (){
  Any a2 = Int(1);
  Any a3 = Int(2);
  Any a4 = Int(3);
  Any a5[] = {a2, a3, a4};
  Any a9 = Int( sizeof( a5 ) / sizeof( a5[0] ) );
  Any a10 = Int(0);
  Any a12 = Int(0);
  Any a14 = Int(0);
  Any a15 = Int( sizeof( a5 ) / sizeof( a5[0] ) );
  Any a13 = a5[a12.i];
  a10 = toStr ( a13 );
  println ( a10 );
  return 0;
}
