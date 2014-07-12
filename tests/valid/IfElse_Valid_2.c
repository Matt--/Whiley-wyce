#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
Any x1x_f ( Any );

Any x1x_f ( Any a0 ){
  Any a2 = Int(10);
  if ( dataAsInt( a0 ) >= dataAsInt( a2 ) ) { goto label6; };
  Any a3 = Int(1);
  return a3;
  label6: ;
  Any a5 = Int(10);
  if ( dataAsInt( a0 ) <= dataAsInt( a5 ) ) { goto label7; };
  Any a6 = Int(2);
  return a6;
  label7: ;
  Any a7 = Int(0);
  return a7;
}

int main (){
  Any a6 = Int(1);
  Any a5 = x1x_f ( a6 );
  Any a4 = toStr ( a5 );
  println ( a4 );
  Any a12 = Int(10);
  Any a11 = x1x_f ( a12 );
  Any a10 = toStr ( a11 );
  println ( a10 );
  Any a18 = Int(11);
  Any a17 = x1x_f ( a18 );
  Any a16 = toStr ( a17 );
  println ( a16 );
  Any a24 = Int(1212);
  Any a23 = x1x_f ( a24 );
  Any a22 = toStr ( a23 );
  println ( a22 );
  Any a30 = Int(1212);
  Any a31 = wyce_neg(a30);
  Any a29 = x1x_f ( a31 );
  Any a28 = toStr ( a29 );
  println ( a28 );
  return 0;
}
