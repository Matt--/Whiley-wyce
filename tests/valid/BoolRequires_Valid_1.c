#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
Any x1x_f ( Any[] );

Any x1x_f ( Any a0[] ){
  Any a9 = a0;
  Any a8 = toStr ( a9 );
  return a8;
}

int main (){
  Any a5 = Bool(true);
  Any a6[] = {a5};
  Any a9 = Int( sizeof( a6 ) / sizeof( a6[0] ) );
  Any a10 = Int(0);
  Any a12 = Int(0);
  Any a13 = a6[a12.i];
  Any a14 = Bool(true);
  Any a4 = x1x_f ( a6 );
  println ( a4 );
  Any a11 = Bool(true);
  a12 = Bool(false);
  Any a13[] = {a11, a12};
  Any a16 = Int( sizeof( a13 ) / sizeof( a13[0] ) );
  Any a17 = Int(0);
  Any a19 = Int(0);
  Any a20 = a13[a19.i];
  Any a21 = Bool(true);
  a10 = x1x_f ( a13 );
  println ( a10 );
  Any a18 = Bool(true);
  a19 = Bool(false);
  a20 = Bool(true);
  Any a21[] = {a18, a19, a20};
  Any a24 = Int( sizeof( a21 ) / sizeof( a21[0] ) );
  Any a25 = Int(0);
  Any a27 = Int(0);
  Any a28 = a21[a27.i];
  Any a29 = Bool(true);
  a17 = x1x_f ( a21 );
  println ( a17 );
  return 0;
}
