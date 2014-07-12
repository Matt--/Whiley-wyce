#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef R1;
typedef R2;

Any f ( Any );

Any f ( Any a0 ){
  Any a6 = Int(0);
  Any a17 = Int(0);
  Any a18 = Int( strlen( a0.s) );
  Any a7 = Char( a0.s[ a6.i ] );
  switch( a7.c ){
    case 'N' : goto label37;
    case 'B' : goto label38;
    case 'R' : goto label39;
    case 'Q' : goto label36;
    case 'K' : goto label40;
  }
  goto label36;
  label37: ;
  Any a10 = Str("GOT KNIGHT");
  Any a8 = a10;
  goto label41;
  label38: ;
  Any a11 = Str("GOT BISHOP");
  a8 = a11;
  goto label41;
  label39: ;
  Any a12 = Str("GOT ROOK");
  a8 = a12;
  goto label41;
  label36: ;
  Any a13 = Str("GOT QUEEN");
  a8 = a13;
  goto label41;
  label40: ;
  Any a14 = Str("GOT KING");
  a8 = a14;
  goto label41;
  Any a15 = Str("GOT NOTHING");
  a8 = a15;
  goto label41;
  label41: ;
  return a8;
}

int main (){
  Any a5 = Str("N");
  Any a8 = Int( strlen( a5.s) );
  Any a9 = Int(0);
  Any a4 = f ( a5 );
  println ( a4 );
  Any a10 = Str("K");
  Any a13 = Int( strlen( a10.s) );
  Any a14 = Int(0);
  a9 = f ( a10 );
  println ( a9 );
  Any a15 = Str("Q");
  Any a18 = Int( strlen( a15.s) );
  Any a19 = Int(0);
  a14 = f ( a15 );
  println ( a14 );
  Any a20 = Str("B");
  Any a23 = Int( strlen( a20.s) );
  Any a24 = Int(0);
  a19 = f ( a20 );
  println ( a19 );
  Any a25 = Str("R");
  Any a28 = Int( strlen( a25.s) );
  Any a29 = Int(0);
  a24 = f ( a25 );
  println ( a24 );
  Any a30 = Str("Q");
  Any a33 = Int( strlen( a30.s) );
  Any a34 = Int(0);
  a29 = f ( a30 );
  println ( a29 );
  Any a35 = Str("e");
  Any a38 = Int( strlen( a35.s) );
  Any a39 = Int(0);
  a34 = f ( a35 );
  println ( a34 );
  Any a40 = Str("1");
  Any a43 = Int( strlen( a40.s) );
  Any a44 = Int(0);
  a39 = f ( a40 );
  println ( a39 );
  return 0;
}
