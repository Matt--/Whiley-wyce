#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef int pos;
typedef int neg;
typedef int expr;

Any x1x_f ( Any );

Any x1x_f ( Any a0 ){
  Any a2 = Int(0);
  if ( dataAsInt( a0 ) <= dataAsInt( a2 ) ) { goto label68; };
  goto label69;
  label68: ;
  goto label70;
  label69: ;
  Any a1 = Str("POSITIVE: ");
  Any a3 = a0;
  a2 = toStr ( a3 );
  Any a4 = Str( strcat ( a1.s , a2.s ) );
  return a4;
  label70: ;
  Any a5 = Str("NEGATIVE: ");
  Any a7 = a0;
  Any a6 = toStr ( a7 );
  Any a8 = Str( strcat ( a5.s , a6.s ) );
  return a8;
}

int main (){
  Any a5 = Int(1);
  Any a6 = wyce_neg(a5);
  Any a4 = x1x_f ( a6 );
  println ( a4 );
  Any a11 = Int(1);
  Any a10 = x1x_f ( a11 );
  println ( a10 );
  Any a16 = Int(1234);
  Any a15 = x1x_f ( a16 );
  println ( a15 );
  return 0;
}
