#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
void f ( Any , Any[] );

void f ( Any a0, Any a1[] ){
  Any a6 = Int(0);
  Any a5 = a6;
  Any a8 = Int(0);
  loop_start_label229: ;
  Any a10 = Int(0);
  Any a12 = Int(1);
  Any a13 = wyce_add( a5 , a12);
  a5 = a13;
  Any a27 = Int(0);
  Any a28 = Int( sizeof( a1 ) / sizeof( a1[0] ) );
  Any a19 = a1[a13.i];
  println ( a19 );
  Any a21 = Int(0);
  Any a23 = Int(1);
  Any a24 = wyce_add( a13 , a23);
  Any a26 = Int( sizeof( a1 ) / sizeof( a1[0] ) );
  if ( dataAsInt( a24 ) >= dataAsInt( a26 ) ) { goto label229; };
  goto loop_start_label229;
  label229: ;
}

int main (){
  Any a1 = null;
  Any a2 = Int(1);
  Any a3 = Int(2);
  Any a4 = Int(3);
  Any a5[] = {a2, a3, a4};
  Any a9 = Int( sizeof( a5 ) / sizeof( a5[0] ) );
  Any a10 = Int(2);
  f ( a1, a5 );
  Any a6 = null;
  Any a7 = Int(1);
  Any a8 = Int(2);
  Any a9[] = {a7, a8};
  Any a13 = Int( sizeof( a9 ) / sizeof( a9[0] ) );
  Any a14 = Int(2);
  f ( a6, a9 );
  a10 = null;
  Any a11 = Int(1);
  Any a12 = Int(2);
  a13 = Int(3);
  a14 = Int(4);
  Any a15 = Int(5);
  Any a16 = Int(6);
  Any a17[] = {a11, a12, a13, a14, a15, a16};
  Any a21 = Int( sizeof( a17 ) / sizeof( a17[0] ) );
  Any a22 = Int(2);
  f ( a10, a17 );
  return 0;
}
