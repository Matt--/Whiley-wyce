#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef int nat;

Any* create ( Any , Any );

Any* create ( Any a0, Any a1 ){
  Any a2 [10];
  Any a5 = Int(0);
  Any a4 = a5;
  Any a10 = Int( sizeof( a2 ) / sizeof( a2[0] ) );
  loop_start_label4: ;
  Any a15 = Int( sizeof( a2 ) / sizeof( a2[0] ) );
  if ( dataAsInt( a4 ) >= dataAsInt( a0 ) ) { goto label4; };
  Any a20[] = {a1};
  #### appending arrays not yet catered for;
  a2 = null;
  Any a23 = Int(1);
  Any a24 = add( a4 , a23);
  a4 = a24;
  Any a29 = Int( sizeof( a21 ) / sizeof( a21[0] ) );
  goto loop_start_label4;
  label4: ;
  Any a37 = Int( sizeof( a2 ) / sizeof( a2[0] ) );
  return a2;
}

int main (){
  Any a6 = Int(3);
  Any a7 = Int(3);
  Any a12 = Int(0);
  Any *a5 = create ( a6, a7 );
  Any a4 = toStr ( a5 );
  println ( a4 );
  Any a13 = Int(2);
  Any a14 = Int(2);
  Any a19 = Int(0);
  a12 = create ( a13, a14 );
  Any a11 = toStr ( a12 );
  println ( a11 );
  Any a20 = Int(2);
  Any a21 = Int(1);
  Any a26 = Int(0);
  a19 = create ( a20, a21 );
  Any a18 = toStr ( a19 );
  println ( a18 );
  Any a27 = Int(1);
  Any a28 = Int(1);
  Any a33 = Int(0);
  a26 = create ( a27, a28 );
  Any a25 = toStr ( a26 );
  println ( a25 );
  Any a34 = Int(0);
  Any a35 = Int(0);
  Any a40 = Int(0);
  a33 = create ( a34, a35 );
  Any a32 = toStr ( a33 );
  println ( a32 );
  return 0;
}
