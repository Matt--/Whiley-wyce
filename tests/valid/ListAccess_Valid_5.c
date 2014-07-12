#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
Any f ( Any[] );

Any f ( Any a0[] ){
  Any a3 = Int( sizeof( a0 ) / sizeof( a0[0] ) );
  Any a1 = toStr ( a3 );
  return a1;
}

int main (){
  Any a2 = Int(1);
  Any a3 = Int(2);
  Any a4 = Int(3);
  Any a5[] = {a2, a3, a4};
  Any a6[] = {a5};
  Any a12 = Int(0);
  Any a14 = Int(0);
  Any a15 = Int( sizeof( a6 ) / sizeof( a6[0] ) );
  Any *a13 = a6[a12.i];
  Any a10 = f ( a13 );
  println ( a10 );
  return 0;
}
