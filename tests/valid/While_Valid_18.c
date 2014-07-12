#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef int nat;

Any match ( Any[] , Any , Any );

Any match ( Any a0[], Any a1, Any a2 ){
  Any a4 = a2;
  Any a3 = a4;
  Any a6 = Int(0);
  Any a5 = a6;
  Any a8 = Int(0);
  Any a10 = Int(0);
  loop_start_label345: ;
  Any a12 = Int(0);
  ####### assume ge
  Any a14 = Int(0);
  ####### assume ge
  if ( dataAsInt( a1 ) >= dataAsInt( a3 ) ) { goto label345; };
  Any a19 = Int( sizeof( a0 ) / sizeof( a0[0] ) );
  if ( dataAsInt( a3 ) >= dataAsInt( a19 ) ) { goto label345; };
  Any a40 = Int(0);
  Any a41 = Int( sizeof( a0 ) / sizeof( a0[0] ) );
  Any a22 = a0[a1.i];
  a40 = Int(0);
  a41 = Int( sizeof( a0 ) / sizeof( a0[0] ) );
  Any a25 = a0[a3.i];
  if ( dataAsInt( a22 ) != dataAsInt( a25 ) ) { goto label345; };
  Any a27 = Int(1);
  Any a28 = add( a1 , a27);
  a1 = a28;
  Any a30 = Int(1);
  Any a31 = add( a3 , a30);
  a3 = a31;
  Any a33 = Int(1);
  Any a34 = add( a5 , a33);
  a5 = a34;
  Any a36 = Int(0);
  Any a38 = Int(0);
  goto loop_start_label345;
  label345: ;
  return a5;
}

int main (){
  Any a2 = Byte(00000000b);
  Any a3 = Byte(00000101b);
  Any a4 = Byte(00000000b);
  Any a5 = Byte(00000110b);
  Any a6 = Byte(00000000b);
  Any a7 = Byte(00000101b);
  Any a8[] = {a2, a3, a4, a5, a6, a7};
  Any a12 = Int(0);
  Any a14 = Int( sizeof( a8 ) / sizeof( a8[0] ) );
  Any a15 = Int(2);
  Any a16 = sub( a14 , a15);
  Any a22 = Int(0);
  a22 = Int(0);
  Any a10 = match ( a8, a12, a16 );
  Any a9 = a10;
  Any a21 = a9;
  Any a20 = toStr ( a21 );
  println ( a20 );
  return 0;
}
