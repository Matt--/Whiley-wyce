#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
Any f ( Any );

Any f ( Any a0 ){
  switch( a0.i ){
    case 1 : goto label37;
    case 2 : goto label38;
    default : goto label36;
  }
  label37: ;
  Any a2 = Int(123);
  return a2;
  label38: ;
  Any a3 = Int(234);
  return a3;
  label36: ;
  Any a4 = Int(456);
  return a4;
}

int main (){
  Any a4 = Str("NUM: ");
  Any a6 = Int(1);
  Any a9 = ;
  Any a5 = f ( a6 );
  a5 = toStr ( a5 );
  Any a7 = Str( strcat ( a4.s , a5.s ) );
  println ( a7 );
  Any a11 = Str("NUM: ");
  Any a13 = Int(3);
  Any a16 = ;
  Any a12 = f ( a13 );
  a12 = toStr ( a12 );
  Any a14 = Str( strcat ( a11.s , a12.s ) );
  println ( a14 );
  Any a18 = Str("NUM: ");
  Any a20 = Int(2);
  Any a23 = ;
  Any a19 = f ( a20 );
  a19 = toStr ( a19 );
  Any a21 = Str( strcat ( a18.s , a19.s ) );
  println ( a21 );
  return 0;
}
