#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
Any x1x_repl ( Any , Any , Any );

Any x1x_repl ( Any a0, Any a1, Any a2 ){
  Any a4 = Int(0);
  Any a3 = a4;
  Any a6 = Int(0);
  loop_start_label206: ;
  Any a8 = Int(0);
  Any a11 = Int( strlen( a2.s) );
  if ( dataAsInt( a3 ) >= dataAsInt( a11 ) ) { goto label206; };
  Any a24 = Int(0);
  Any a25 = Int( strlen( a2.s) );
  Any a14 = Char( a2.s[ a3.i ] );
  if ( dataAsInt( a14 ) != dataAsInt( a0 ) ) { goto label207; };
  Any a17 = a1;
  a2.s[a3.i] = a17.c;
  label207: ;
  Any a19 = Int(1);
  Any a20 = wyce_add( a3 , a19);
  a3 = a20;
  Any a22 = Int(0);
  goto loop_start_label206;
  label206: ;
  return a2;
}

int main (){
  Any a2 = Str("Hello World");
  Any a4 = Char('l');
  Any a5 = Char('1');
  Any a3 = x1x_repl ( a4, a5, a2 );
  Any a1 = a3;
  Any a10 = a1;
  println ( a10 );
  return 0;
}
