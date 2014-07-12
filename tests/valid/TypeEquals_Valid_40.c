#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
Any f ( Any );

Any f ( Any a0 ){
  if(a0.type == REAL_TYPE){ goto label17; };
  goto label18;
  label17: ;
  Any a2 = Real(0);
  if ( dataAsInt( a0 ) <= dataAsInt( a2 ) ) { goto label18; };
  Any a3 = Str("POSITIVE: ");
  Any a5 = a0;
  Any a4 = toStr ( a5 );
  Any a6 = Str( strcat ( a3.s , a4.s ) );
  return a6;
  label18: ;
  if(a0.type == INT_TYPE){ goto label17; };
  goto label19;
  Any a7 = Str("NEGATIVE: ");
  Any a9 = a0;
  Any a8 = toStr ( a9 );
  Any a10 = Str( strcat ( a7.s , a8.s ) );
  return a10;
  label19: ;
  Any a11 = Str("OTHER");
  return a11;
}

int main (){
  Any a5 = Int(1);
  Any a6 = wyce_neg(a5);
  Any a4 = f ( a6 );
  println ( a4 );
  Any a11 = Real(1.0);
  Any a10 = f ( a11 );
  println ( a10 );
  Any a16 = Real(1.234);
  Any a15 = f ( a16 );
  println ( a15 );
  Any a21 = Int(1);
  Any a22 = Int(2);
  Any a23 = Int(3);
  Any a24[] = {a21, a22, a23};
  Any a20 = f ( a24 );
  println ( a20 );
  return 0;
}
