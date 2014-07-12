#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
Any x1x_run ( Any , Any );

Any x1x_run ( Any a0, Any a1 ){
  Any a3 = Bool(true);
  Any a2 = a3;
  Any a4 = Int(0);
  a4, a0};
  int count = a6[0];
  loop_start_label62: ;
  if(count == a6[1]){ goto label62; }
  Any a7 = Char( a6[count] );
  count++;
  if ( dataAsInt( a7 ) != dataAsInt( a1 ) ) { goto label63; };
  Any a10 = Bool(false);
  a2 = a10;
  goto label62;
  label63: ;
  goto loop_start_label62;
  label62: ;
  return a2;
}

int main (){
  Any a3 = Int(10);
  Any a4 = Int(4);
  Any a2 = x1x_run ( a3, a4 );
  Any a1 = a2;
  Any a8 = Str("b1=");
  Any a10 = a1;
  Any a9 = toStr ( a10 );
  Any a11 = Str( strcat ( a8.s , a9.s ) );
  println ( a11 );
  Any a14 = Int(10);
  Any a15 = Int(1);
  Any a16 = wyce_neg(a15);
  Any a13 = x1x_run ( a14, a16 );
  Any a12 = a13;
  Any a20 = Str("b2=");
  Any a22 = a12;
  Any a21 = toStr ( a22 );
  Any a23 = Str( strcat ( a20.s , a21.s ) );
  println ( a23 );
  Any a26 = Int(10);
  Any a27 = Int(11);
  Any a25 = x1x_run ( a26, a27 );
  Any a24 = a25;
  Any a31 = Str("b3=");
  Any a33 = a24;
  Any a32 = toStr ( a33 );
  Any a34 = Str( strcat ( a31.s , a32.s ) );
  println ( a34 );
  return 0;
}
