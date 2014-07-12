#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
Any x1x_abs ( Any );

Any x1x_abs ( Any a0 ){
  Any a7 = a0;
  if(a0.type == INT_TYPE){ goto label159; };
  label159: ;
  goto label160;
  Any a2 = Int(0);
  if ( dataAsInt( a0 ) < dataAsInt( a2 ) ) { goto label161; };
  if(a7.type == INT_TYPE){ goto label159; };
  goto label162;
  if ( dataAsInt( a0 ) == dataAsInt( a7 ) ) { goto label162; };
  Any a14 = wyce_neg(a7);
  label162: ;
  Any a16 = Int(0);
  return a0;
  label161: ;
  Any a5 = wyce_neg(a0);
  if(a7.type == INT_TYPE){ goto label159; };
  goto label163;
  if ( dataAsInt( a5 ) == dataAsInt( a7 ) ) { goto label163; };
  a14 = wyce_neg(a7);
  label163: ;
  a16 = Int(0);
  return a5;
  label160: ;
  Any a6 = Int(0);
  if(a7.type == INT_TYPE){ goto label159; };
  goto label164;
  if ( dataAsInt( a6 ) == dataAsInt( a7 ) ) { goto label164; };
  a14 = wyce_neg(a7);
  label164: ;
  a16 = Int(0);
  return a6;
}

int main (){
  Any a4 = Str("abs(1) = ");
  Any a6 = Int(1);
  Any a5 = x1x_abs ( a6 );
  a5 = toStr ( a5 );
  Any a7 = Str( strcat ( a4.s , a5.s ) );
  println ( a7 );
  Any a11 = Str("abs(-1) = ");
  Any a13 = Int(1);
  Any a14 = wyce_neg(a13);
  Any a12 = x1x_abs ( a14 );
  a12 = toStr ( a12 );
  Any a15 = Str( strcat ( a11.s , a12.s ) );
  println ( a15 );
  Any a19 = Str("abs(null) = ");
  Any a21 = Null();
  Any a20 = x1x_abs ( a21 );
  a20 = toStr ( a20 );
  Any a22 = Str( strcat ( a19.s , a20.s ) );
  println ( a22 );
  return 0;
}
