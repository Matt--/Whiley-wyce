#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
Any sum ( Any[] );

Any sum ( Any a0[] ){
  Any a5 = Int(0);
  Any a7 = Int(0);
  Any a9 = Int(0);
  Any a36 = Int(0);
  Any a37 = Int( sizeof( a0 ) / sizeof( a0[0] ) );
  Any a13 = a0[a5.i];
  Any a14 = add( a7 , a13);
  Any a6 = a14;
  Any a16 = Int(1);
  Any a17 = add( a5 , a16);
  Any a4 = a17;
  Any a19 = Int(0);
  loop_start_label244: ;
  Any a21 = Int(0);
  ####### assume ge
  Any a24 = Int( sizeof( a0 ) / sizeof( a0[0] ) );
  if ( dataAsInt( a4 ) >= dataAsInt( a24 ) ) { goto label244; };
  a36 = Int(0);
  a37 = Int( sizeof( a0 ) / sizeof( a0[0] ) );
  Any a28 = a0[a4.i];
  Any a29 = add( a6 , a28);
  a6 = a29;
  Any a31 = Int(1);
  Any a32 = add( a4 , a31);
  a4 = a32;
  Any a34 = Int(0);
  goto loop_start_label244;
  label244: ;
  return a6;
}

int main (){
  Any a5 = Int(1);
  Any a6[] = {a5};
  Any a9 = Int( sizeof( a6 ) / sizeof( a6[0] ) );
  Any a10 = Int(0);
  Any a4 = sum ( a6 );
  println ( a4 );
  Any a11 = Int(1);
  Any a12 = Int(2);
  Any a13[] = {a11, a12};
  Any a16 = Int( sizeof( a13 ) / sizeof( a13[0] ) );
  Any a17 = Int(0);
  a10 = sum ( a13 );
  println ( a10 );
  Any a18 = Int(1);
  Any a19 = Int(2);
  Any a20 = Int(3);
  Any a21[] = {a18, a19, a20};
  Any a24 = Int( sizeof( a21 ) / sizeof( a21[0] ) );
  Any a25 = Int(0);
  a17 = sum ( a21 );
  println ( a17 );
  return 0;
}
