#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef int nat;

Any x1x_f ( Any , Any );

Any x1x_f ( Any a0, Any a1 ){
  Any a4 = Int( strlen( a1.s) );
  if ( dataAsInt( a0 ) < dataAsInt( a4 ) ) { goto label180; };
  Any a6 = Str("Missing flag");
  Any a5 = x1x_SyntaxError ( a6, a0, a0 );
  label180: ;
  Any a16 = Int(0);
  Any a17 = Int( strlen( a1.s) );
  Any a12 = Char( a1.s[ a0.i ] );
  Any a13 = Char('O');
  if ( dataAsInt( a12 ) == dataAsInt( a13 ) ) { goto label181; };
  Any a14 = Bool(false);
  goto label182;
  label181: ;
  a14 = Bool(true);
  label182: ;
  return a14;
}

int main (){
  Any a6 = Int(0);
  Any a7 = Str("Ox");
  Any a12 = Int(0);
  Any a5 = x1x_f ( a6, a7 );
  println ( a5 );
  a12 = Int(0);
  Any a13 = Str("1x");
  Any a18 = Int(0);
  Any a11 = x1x_f ( a12, a13 );
  println ( a11 );
  a18 = Int(1);
  Any a19 = Str("O");
  Any a24 = Int(0);
  Any a17 = x1x_f ( a18, a19 );
  println ( a17 );
  goto label184;
  label183: ;
  Any a23 = Str("SYNTAX ERROR");
  println ( a23 );
  goto label184;
  label184: ;
  return 0;
}
