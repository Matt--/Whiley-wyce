#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
Any x1x_f ( Any );

Any x1x_f ( Any a0 ){
  Any a2 = Int(1);
  Any a3 = Int(2);
  Any a4 = Int(64);
  Any a5[] = {a2, a3, a4};
  Any *a1 = a5;
  Any *a7 = a1;
  Any *a6 = a7;
  Any a10 = Int( sizeof( a5 ) / sizeof( a5[0] ) );
  if ( dataAsInt( a0 ) == dataAsInt( a10 ) ) { goto label246; };
  Any a11 = Int(2);
  Any a12 = Int(3);
  a6[a11.i] = a12;
  goto label247;
  label246: ;
  Any a13 = Int(2);
  Any a14 = a0;
  a6[a13.i] = a14;
  label247: ;
  Any a16 = Int(2);
  Any a25 = Int(0);
  Any a26 = Int( sizeof( a6 ) / sizeof( a6[0] ) );
  Any a17 = a6[a16.i];
  Any a19 = Int( sizeof( a5 ) / sizeof( a5[0] ) );
  Any *a21 = a1;
  Any a20 = toStr ( a21 );
  Any *a23 = a6;
  Any a22 = toStr ( a23 );
  Any a24 = Str( strcat ( a20.s , a22.s ) );
  return a24;
}

int main (){
  Any a5 = Int(2);
  Any a4 = x1x_f ( a5 );
  println ( a4 );
  Any a10 = Int(3);
  Any a9 = x1x_f ( a10 );
  println ( a9 );
  return 0;
}
