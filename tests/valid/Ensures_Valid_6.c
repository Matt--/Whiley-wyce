#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef int nat;

Any x1x_abs ( Any );

Any x1x_abs ( Any a0 ){
  Any a2 = Int(0);
  if ( dataAsInt( a0 ) < dataAsInt( a2 ) ) { goto label159; };
  label160: ;
  Any a3 = a0;
  if(a3.type == INT_TYPE){ goto label160; };
  goto label161;
  Any a9 = Int(0);
  label161: ;
  return a3;
  label159: ;
  Any a4 = Null();
  if(a4.type == INT_TYPE){ goto label160; };
  goto label162;
  a9 = Int(0);
  label162: ;
  return a4;
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
  return 0;
}
