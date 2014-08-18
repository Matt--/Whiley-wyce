#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef double pos;
typedef int neg;

Any x1x_f ( Any  );

Any x1x_f ( Any a0 ){
  if(a0.type == REAL_TYPE){ goto label69; };
  goto label70;
  label69: ;
  Any a2 = Real(0);
  if ( dataAsInt( a0 ) <= dataAsInt( a2 ) ) { goto label70; };
  goto label71;
  label70: ;
  goto label72;
  label71: ;
  Any a1 = Str("POSITIVE: ");
  a2 = toStr ( a0 );
  Any a4 = Str( strcat ( a1.s , a2.s ) );
  return a4;
  label72: ;
  Any a5 = Str("NEGATIVE: ");
  Any a6 = toStr ( a0 );
  Any a8 = Str( strcat ( a5.s , a6.s ) );
  return a8;
}

int main (){
  Any a5 = Int(1);
  label73: ;
  Any a6 = wyce_neg(a5);
  if( !a6.type == REAL_TYPE){ goto label73; };
  Any a10 = Real(0);
  if( !a6.type == INT_TYPE){ goto label73; };
  a10 = Int(0);
  Any a4 = x1x_f ( a6 );
  println ( a4 );
  Any a11 = Real(1.0);
  if( !a11.type == REAL_TYPE){ goto label73; };
  Any a15 = Real(0);
  if( !a11.type == INT_TYPE){ goto label73; };
  a15 = Int(0);
  a10 = x1x_f ( a11 );
  println ( a10 );
  Any a16 = Real(1234.0);
  if( !a16.type == REAL_TYPE){ goto label73; };
  Any a20 = Real(0);
  if( !a16.type == INT_TYPE){ goto label73; };
  a20 = Int(0);
  a15 = x1x_f ( a16 );
  println ( a15 );
  return 0;
}
