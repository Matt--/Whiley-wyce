#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef int nat;

Any x1x_max ( Any , Any );
Any x1x_diff ( Any , Any );

Any x1x_max ( Any a0, Any a1 ){
  if ( dataAsInt( a0 ) >= dataAsInt( a1 ) ) { goto label110; };
  if ( dataAsInt( a1 ) == dataAsInt( a0 ) ) { goto label111; };
  label111: ;
  return a1;
  label110: ;
  if ( dataAsInt( a0 ) == dataAsInt( a0 ) ) { goto label112; };
  label112: ;
  return a0;
}

Any x1x_diff ( Any a0, Any a1 ){
  if ( dataAsInt( a0 ) <= dataAsInt( a1 ) ) { goto label113; };
  Any a7 = wyce_sub( a0 , a1);
  Any a2 = a7;
  goto label114;
  label113: ;
  Any a10 = wyce_sub( a1 , a0);
  a2 = a10;
  label114: ;
  Any a21 = wyce_sub( a0 , a1);
  Any a24 = wyce_sub( a1 , a0);
  Any a18 = x1x_max ( a21, a24 );
  return a2;
}

int main (){
  Any a2 = Int(10);
  Any a3 = wyce_neg(a2);
  Any a4 = Int(10);
  a3, a4};
  int count = 0;
  loop_start_label115: ;
  if(count == a1.i )){ goto label115; }
  Any a7 = Char( a5[count] );
  count++;
  int count = 0;
  loop_start_label116: ;
  if(count == a1.i )){ goto label116; }
  Any a9 = Char( a5[count] );
  count++;
  Any a13 = Str("DIFF(");
  Any a14 = a7;
  a14 = toStr ( a14 );
  Any a15 = Str( strcat ( a13.s , a14.s ) );
  Any a16 = Str(",");
  Any a17 = Str( strcat ( a15.s , a16.s ) );
  Any a18 = a9;
  a18 = toStr ( a18 );
  Any a19 = Str( strcat ( a17.s , a18.s ) );
  Any a20 = Str(") = ");
  Any a21 = Str( strcat ( a19.s , a20.s ) );
  Any a22 = x1x_diff ( a7, a9 );
  a22 = toStr ( a22 );
  Any a25 = Str( strcat ( a21.s , a22.s ) );
  println ( a25 );
  goto loop_start_label116;
  label116: ;
  goto loop_start_label115;
  label115: ;
  return 0;
}
