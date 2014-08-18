#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
Any x1x_f ( Any , Any  );
Any x1x_g ( Any , Any  );

Any x1x_f ( Any a0, Any a1 ){
  if ( dataAsInt( a0 ) == dataAsInt( a1 ) ) { goto label165; };
  Any a5 = Bool(false);
  goto label166;
  label165: ;
  a5 = Bool(true);
  label166: ;
  Any a7 = Bool(true);
  if ( dataAsInt( a5 ) == dataAsInt( a7 ) ) { goto label167; };
  goto label168;
  label167: ;
  Any a8 = Int(1);
  return a8;
  label168: ;
  Any a11 = wyce_add( a0, a1);
  return a11;
}

Any x1x_g ( Any a0, Any a1 ){
  if ( dataAsInt( a0 ) >= dataAsInt( a1 ) ) { goto label169; };
  Any a5 = Bool(false);
  goto label170;
  label169: ;
  a5 = Bool(true);
  label170: ;
  Any a7 = Bool(true);
  if ( dataAsInt( a5 ) == dataAsInt( a7 ) ) { goto label171; };
  Any a10 = wyce_add( a0, a1);
  return a10;
  label171: ;
  Any a11 = Int(1);
  return a11;
}

int main (){
  Any a6 = Int(1);
  Any a7 = Int(1);
  Any a5 = x1x_f ( a6, a7 );
  Any a4 = toStr ( a5 );
  println ( a4 );
  Any a13 = Int(0);
  Any a14 = Int(0);
  Any a12 = x1x_f ( a13, a14 );
  Any a11 = toStr ( a12 );
  println ( a11 );
  Any a20 = Int(4);
  Any a21 = Int(345);
  Any a19 = x1x_f ( a20, a21 );
  Any a18 = toStr ( a19 );
  println ( a18 );
  Any a27 = Int(1);
  Any a28 = Int(1);
  Any a26 = x1x_g ( a27, a28 );
  Any a25 = toStr ( a26 );
  println ( a25 );
  Any a34 = Int(0);
  Any a35 = Int(0);
  Any a33 = x1x_g ( a34, a35 );
  Any a32 = toStr ( a33 );
  println ( a32 );
  Any a41 = Int(4);
  Any a42 = Int(345);
  Any a40 = x1x_g ( a41, a42 );
  Any a39 = toStr ( a40 );
  println ( a39 );
  return 0;
}
