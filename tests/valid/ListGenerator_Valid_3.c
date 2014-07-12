#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
Any f ( Any[] );

Any f ( Any a0[] ){
  Any a5 = Int(0);
  Any a16 = Int(0);
  Any a17 = Int( sizeof( a0 ) / sizeof( a0[0] ) );
  Any *a6 = a0[a5.i];
  Any a7 = Int( sizeof( a6 ) / sizeof( a6[0] ) );
  Any a8 = Int(2);
  if ( dataAsInt( a7 ) <= dataAsInt( a8 ) ) { goto label0; };
  Any a11 = Int(0);
  a16 = Int(0);
  a17 = Int( sizeof( a0 ) / sizeof( a0[0] ) );
  Any *a12 = a0[a11.i];
  Any a13 = Int(1);
  a16 = Int(0);
  a17 = Int( sizeof( a12 ) / sizeof( a12[0] ) );
  Any a14 = a12[a13.i];
  Any a9 = toStr ( a14 );
  return a9;
  label0: ;
  Any a15 = Str("");
  return a15;
}

int main (){
  Any a2 = Int(1);
  Any a3 = Int(2);
  Any a4 = Int(3);
  Any a5[] = {a2, a3, a4};
  Any a6 = Int(1);
  Any a7[] = {a6};
  Any a8[] = {a5, a7};
  Any a16 = Int( sizeof( a8 ) / sizeof( a8[0] ) );
  Any a17 = Int(0);
  Any a12 = f ( a8 );
  println ( a12 );
  return 0;
}
