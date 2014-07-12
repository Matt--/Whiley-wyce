#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
Any x1x_f ( Any );

Any x1x_f ( Any a0 ){
  if(a0.type == REAL_TYPE){ goto label72; };
  goto label73;
  label72: ;
  Any a2 = Real(0);
  if ( dataAsInt( a0 ) <= dataAsInt( a2 ) ) { goto label73; };
  goto label74;
  label73: ;
  goto label75;
  label74: ;
  Any a1 = Str("POSITIVE: ");
  Any a3 = a0;
  a2 = toStr ( a3 );
  Any a4 = Str( strcat ( a1.s , a2.s ) );
  return a4;
  label75: ;
  Any a5 = Str("NEGATIVE: ");
  Any a7 = a0;
  Any a6 = toStr ( a7 );
  Any a8 = Str( strcat ( a5.s , a6.s ) );
  return a8;
}

int main (){
  Any a5 = Int(1);
  label76: ;
  Any a6 = wyce_neg(a5);
  if( !a6.type == REAL_TYPE){ goto label76; };
  Any a10 = Real(0);
  if( !a6.type == INT_TYPE){ goto label76; };
  a10 = Int(0);
  Any a4 = x1x_f ( a6 );
  println ( a4 );
  Any a11 = Real(1.0);
  if( !a11.type == REAL_TYPE){ goto label76; };
  Any a15 = Real(0);
  if( !a11.type == INT_TYPE){ goto label76; };
  a15 = Int(0);
  a10 = x1x_f ( a11 );
  println ( a10 );
  Any a16 = Real(1234.0);
  if( !a16.type == REAL_TYPE){ goto label76; };
  Any a20 = Real(0);
  if( !a16.type == INT_TYPE){ goto label76; };
  a20 = Int(0);
  a15 = x1x_f ( a16 );
  println ( a15 );
  return 0;
}
