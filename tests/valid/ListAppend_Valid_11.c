#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
Any f ( Any[] );

Any f ( Any a0[] ){
  Any a2 = Int( sizeof( a0 ) / sizeof( a0[0] ) );
  return a2;
}

int main (){
  Any a2 = Int(1);
  Any a3 = Int(2);
  Any a4 = Int(3);
  Any a5[] = {a2, a3, a4};
  Any a7 = Int(5);
  Any a8 = Int(6);
  Any a9 = Int(7);
  Any a10[] = {a7, a8, a9};
  #### appending arrays not yet catered for;
  Any a12 = f ( a15 );
  Any a11 = a12;
  Any a20 = a11;
  Any a19 = toStr ( a20 );
  println ( a19 );
  return 0;
}
