#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
Any f ( Any[] );

Any f ( Any a0[] ){
  if(a0.type == ){ goto label558; };
  goto label559;
  label558: ;
  Any a2 = Int( sizeof( a0 ) / sizeof( a0[0] ) );
  Any a3 = Int(0);
  if ( dataAsInt( a2 ) <= dataAsInt( a3 ) ) { goto label559; };
  Any a5 = Int(0);
  Any a11 = Int(0);
  Any a12 = Int( sizeof( a0 ) / sizeof( a0[0] ) );
  Any *a6 = a0[a5.i];
  return a6;
  label559: ;
  Any a7 = Int(1);
  Any a8 = Int(2);
  Any a9 = Int(3);
  Any a10[] = {a7, a8, a9};
  return a10;
}

int main (){
  Any a6 = Int(1);
  Any a7 = Int(2);
  Any a8 = Int(3);
  Any a9 = Int(4);
  Any a10 = Int(5);
  Any a11 = Int(6);
  Any a12 = Int(7);
  Any a13[] = {a6, a7, a8, a9, a10, a11, a12};
  Any a14[] = {a13};
  Any *a5 = f ( a14 );
  Any a4 = toStr ( a5 );
  println ( a4 );
  Any a21 = ;
  Any *a19 = f ( a21 );
  Any a18 = toStr ( a19 );
  println ( a18 );
  Any a27 = Int(1);
  Any a28 = Int(2);
  Any a29 = Real(2.01);
  Any a30[] = {a27, a28, a29};
  Any a31[] = {a30};
  Any *a26 = f ( a31 );
  Any a25 = toStr ( a26 );
  println ( a25 );
  Any a37 = Real(1.23);
  Any a38 = Int(2);
  Any a39 = Real(2.01);
  Any a40[] = {a37, a38, a39};
  Any a41[] = {a40};
  Any *a36 = f ( a41 );
  Any a35 = toStr ( a36 );
  println ( a35 );
  return 0;
}
