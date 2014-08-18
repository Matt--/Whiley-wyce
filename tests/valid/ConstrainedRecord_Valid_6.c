#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef struct {Any input; Any pos; } state;

state x1x_parseWhiteSpace ( state  );
state x1x_parseTerm ( state  );

state x1x_parseWhiteSpace ( state a0 ){
  Any a2 = a0.pos;
  Any a4 = a0.input;
  Any a5 = Int( strlen( a4.s) );
  if ( dataAsInt( a2 ) >= dataAsInt( a5 ) ) { goto label142; };
  Any a7 = a0.input;
  Any a9 = a0.pos;
  Any a22 = Int(0);
  Any a23 = Int( strlen( a7.s) );
  Any a10 = Char( a7.s[ a9.i ] );
  Any a11 = Char(' ');
  if ( dataAsInt( a10 ) != dataAsInt( a11 ) ) { goto label142; };
  Any a14 = a0.input;
  Any a16 = a0.pos;
  Any a17 = Int(1);
  Any a18 = wyce_add( a16, a17);
  state a19 = { a14, a18 };
  a22 = a19.input;
  a23 = a19.pos;
  Any a25 = Int(0);
  Any a28 = Int( strlen( a22.s) );
  state a12 = x1x_parseWhiteSpace ( a19 );
  a14 = a12.input;
  Any a15 = a12.pos;
  a17 = Int(0);
  Any a20 = Int( strlen( a14.s) );
  return a12;
  label142: ;
  a22 = a0.input;
  a23 = a0.pos;
  a25 = Int(0);
  a28 = Int( strlen( a22.s) );
  return a0;
}

state x1x_parseTerm ( state a0 ){
  Any a5 = a0.input;
  Any a6 = a0.pos;
  Any a8 = Int(0);
  Any a11 = Int( strlen( a5.s) );
  state a1 = x1x_parseWhiteSpace ( a0 );
  a5 = a1.input;
  a6 = a1.pos;
  a8 = Int(0);
  a11 = Int( strlen( a5.s) );
  return a1;
}

int main (){
  Any a2 = Str("  Hello");
  Any a3 = Int(0);
  state a4 = { a2, a3 };
  Any a9 = a4.input;
  Any a10 = a4.pos;
  Any a12 = Int(0);
  Any a15 = Int( strlen( a9.s) );
  state a5 = x1x_parseTerm ( a4 );
  a10 = recordToStr2( "input", a5.input, "pos", a5.pos);
  println ( a10 );
  return 0;
}
