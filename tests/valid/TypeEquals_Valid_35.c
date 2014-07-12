#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
Any f ( Any );

Any f ( Any a0 ){
  if(a0.type == INT_TYPE){ goto label11; };
  goto label12;
  label11: ;
  Any a2 = Int(0);
  if ( dataAsInt( a0 ) <= dataAsInt( a2 ) ) { goto label12; };
  Any a4 = Int(1);
  Any a5 = wyce_add( a0 , a4);
  a0 = a5;
  Any a6 = Str("POSITIVE: ");
  Any a8 = a0;
  Any a7 = toStr ( a8 );
  Any a9 = Str( strcat ( a6.s , a7.s ) );
  return a9;
  label12: ;
  Any a10 = Str("NEGATIVE: ");
  Any *a12 = a0;
  Any a11 = toStr ( a12 );
  Any a13 = Str( strcat ( a10.s , a11.s ) );
  return a13;
}

int main (){
  Any a5 = Int(1);
  Any a6 = wyce_neg(a5);
  Any a4 = f ( a6 );
  println ( a4 );
  Any a11 = Int(1);
  Any a10 = f ( a11 );
  println ( a10 );
  Any a16 = Int(1234);
  Any a15 = f ( a16 );
  println ( a15 );
  return 0;
}
