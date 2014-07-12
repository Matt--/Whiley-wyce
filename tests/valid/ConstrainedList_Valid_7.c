#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
Any* f ( Any[] );
Any* g ( Any[] );

Any* f ( Any a0[] ){
  Any a6 = Int(0);
  Any a10 = Int(0);
  Any a11 = Int( sizeof( a0 ) / sizeof( a0[0] ) );
  Any a7 = a0[a6.i];
  Any a8 = Int(0);
  return a0;
}

Any* g ( Any a0[] ){
  Any a6 = Int( sizeof( a0 ) / sizeof( a0[0] ) );
  Any a7 = Int(0);
  return a0;
}

int main (){
  Any a5 = Int(0);
  Any a6 = Int(1);
  Any a7 = Int(2);
  Any a8[] = {a5, a6, a7};
  Any a11 = Int(0);
  Any a12 = a8[a11.i];
  Any a13 = Int(0);
  Any *a4 = f ( a8 );
  println ( a4 );
  a13 = Int(0);
  Any a14[] = {a13};
  Any a17 = Int(0);
  Any a18 = a14[a17.i];
  Any a19 = Int(0);
  a12 = g ( a14 );
  println ( a12 );
  a19 = Int(0);
  Any a20 = Int(1);
  Any a21 = Int(2);
  Any a22[] = {a19, a20, a21};
  Any a25 = Int(0);
  Any a26 = a22[a25.i];
  Any a27 = Int(0);
  a18 = g ( a22 );
  println ( a18 );
  return 0;
}
