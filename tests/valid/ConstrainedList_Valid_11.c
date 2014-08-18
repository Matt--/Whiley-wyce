#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef struct {Any input; Any pos; } state;

Any x1x_f ( Any );

Any x1x_f ( Any a0 ){
  Any a2 = a0.pos;
  Any a4 = a0.input;
  Any a5 = Int( strlen( a4.s) );
  if ( dataAsInt( a2 ) >= dataAsInt( a5 ) ) { goto label31; };
  Any a8 = a0.input;
  Any a10 = a0.pos;
  Any a19 = Int(0);
  Any a20 = Int( strlen( a8.s) );
  Any a11 = Char( a8.s[ a10.i ] );
  Any a6 = x1x_isLetter ( a11 );
  Any a12 = Bool(true);
  if ( dataAsInt( a6 ) == dataAsInt( a12 ) ) { goto label32; };
  goto label31;
  label32: ;
  Any a14 = a0.input;
  Any a16 = a0.pos;
  a19 = Int(0);
  a20 = Int( strlen( a14.s) );
  Any a17 = Char( a14.s[ a16.i ] );
  return a17;
  label31: ;
  Any a18 = Char(' ');
  return a18;
}

int main (){
  Any a3 = Str("hello");
  Any a4 = Int(0);
  state a5 = { a3, a4 };
  Any a8 = a5.input;
  Any a9 = a5.pos;
  Any a11 = Int(0);
  Any a14 = Int( strlen( a8.s) );
  Any a2 = x1x_f ( a5 );
  Any a1 = a2;
  Any a10 = a1;
  a9 = toStr ( a10 );
  println ( a9 );
  return 0;
}
