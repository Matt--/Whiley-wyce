#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
Any* f ( Any[] );

Any* f ( Any a0[] ){
  Any a2 = Int( sizeof( a0 ) / sizeof( a0[0] ) );
  Any a3 = Int(0);
  if ( dataAsInt( a2 ) != dataAsInt( a3 ) ) { goto label228; };
  Any a10 [10];
  return a0;
  label228: ;
  Any a5 [10];
  a10 [10];
  return a5;
}

int main (){
  Any a2 = Int(5);
  Any a3 = Int(4);
  Any a4 = Int(6);
  Any a5 = Int(3);
  Any a6 = Int(7);
  Any a7 = Int(2);
  Any a8 = Int(8);
  Any a9 = Int(1);
  Any a10[] = {a2, a3, a4, a5, a6, a7, a8, a9};
  Any *a14 = f ( a10 );
  println ( a14 );
  Any a20 [10];
  Any *a19 = f ( a20 );
  println ( a19 );
  return 0;
}
