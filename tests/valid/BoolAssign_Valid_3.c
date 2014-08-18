#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
Any x1x_f ( Any , Any  );
Any x1x_g ( Any , Any  );

Any x1x_f ( Any a0, Any a1 ){
  if ( dataAsInt( a0 ) == dataAsInt( a1 ) ) { goto label158; };
  Any a9 = Bool(false);
  goto label159;
  label158: ;
  a9 = Bool(true);
  label159: ;
  Any a11 = Bool(true);
  if ( dataAsInt( a9 ) == dataAsInt( a11 ) ) { goto label160; };
  goto label161;
  label160: ;
  Any a12 = Int(1);
  Any a22 = Int(0);
  return a12;
  label161: ;
  Any a15 = wyce_add( a0, a1);
  a22 = Int(0);
  return a15;
}

Any x1x_g ( Any a0, Any a1 ){
  if ( dataAsInt( a0 ) >= dataAsInt( a1 ) ) { goto label162; };
  Any a9 = Bool(false);
  goto label163;
  label162: ;
  a9 = Bool(true);
  label163: ;
  Any a11 = Bool(true);
  if ( dataAsInt( a9 ) == dataAsInt( a11 ) ) { goto label164; };
  Any a14 = wyce_add( a0, a1);
  Any a22 = Int(0);
  return a14;
  label164: ;
  Any a15 = Int(1);
  a22 = Int(0);
  return a15;
}

int main (){
  Any a6 = Int(1);
  Any a7 = Int(1);
  Any a11 = Int(0);
  Any a13 = Int(0);
  Any a5 = x1x_f ( a6, a7 );
  Any a4 = toStr ( a5 );
  println ( a4 );
  a13 = Int(0);
  Any a14 = Int(0);
  Any a18 = Int(0);
  Any a20 = Int(0);
  Any a12 = x1x_f ( a13, a14 );
  a11 = toStr ( a12 );
  println ( a11 );
  a20 = Int(4);
  Any a21 = Int(345);
  Any a25 = Int(0);
  Any a27 = Int(0);
  Any a19 = x1x_f ( a20, a21 );
  a18 = toStr ( a19 );
  println ( a18 );
  a27 = Int(1);
  Any a28 = Int(1);
  Any a32 = Int(0);
  Any a34 = Int(0);
  Any a26 = x1x_g ( a27, a28 );
  a25 = toStr ( a26 );
  println ( a25 );
  a34 = Int(0);
  Any a35 = Int(0);
  Any a39 = Int(0);
  Any a41 = Int(0);
  Any a33 = x1x_g ( a34, a35 );
  a32 = toStr ( a33 );
  println ( a32 );
  a41 = Int(4);
  Any a42 = Int(345);
  Any a46 = Int(0);
  Any a48 = Int(0);
  Any a40 = x1x_g ( a41, a42 );
  a39 = toStr ( a40 );
  println ( a39 );
  return 0;
}
