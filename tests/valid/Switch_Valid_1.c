#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef int nat;

Any x1x_f ( Any );

Any x1x_f ( Any a0 ){
  switch( a0.i ){
    case 1 : goto label211;
    case -1 : goto label212;
    default : goto label210;
  }
  label211: ;
  Any a3 = Int(1);
  Any a4 = wyce_sub( a0 , a3);
  Any a7 = Int(0);
  return a4;
  label212: ;
  Any a6 = Int(1);
  a7 = wyce_add( a0 , a6);
  Any a10 = Int(0);
  return a7;
  label210: ;
  Any a8 = Int(1);
  Any a11 = Int(0);
  return a8;
}

int main (){
  Any a6 = Int(2);
  Any a5 = x1x_f ( a6 );
  Any a4 = toStr ( a5 );
  println ( a4 );
  Any a12 = Int(1);
  Any a11 = x1x_f ( a12 );
  Any a10 = toStr ( a11 );
  println ( a10 );
  Any a18 = Int(0);
  Any a17 = x1x_f ( a18 );
  Any a16 = toStr ( a17 );
  println ( a16 );
  Any a24 = Int(1);
  Any a25 = wyce_neg(a24);
  Any a23 = x1x_f ( a25 );
  Any a22 = toStr ( a23 );
  println ( a22 );
  Any a31 = Int(2);
  Any a32 = wyce_neg(a31);
  Any a30 = x1x_f ( a32 );
  Any a29 = toStr ( a30 );
  println ( a29 );
  return 0;
}
