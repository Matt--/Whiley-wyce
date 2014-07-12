#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
Any f ( Any[] );

Any f ( Any a0[] ){
  Any a4 = Int(0);
  Any a5 = Int(5);
  a0[a4.i] = a5;
  Any *a7 = a0;
  Any a6 = toStr ( a7 );
  return a6;
}

int main (){
  Any a2 = Int(1);
  Any a3 = Int(2);
  Any a4 = Int(3);
  Any a5[] = {a2, a3, a4};
  Any *a1 = a5;
  Any *a10 = a1;
  Any a9 = toStr ( a10 );
  println ( a9 );
  Any a18 = Int( sizeof( a5 ) / sizeof( a5[0] ) );
  Any a19 = Int(0);
  Any a14 = f ( a5 );
  println ( a14 );
  Any *a20 = a1;
  a19 = toStr ( a20 );
  println ( a19 );
  return 0;
}
