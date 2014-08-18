#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
Any x1x_repl ( Any , Any , Any  );

Any x1x_repl ( Any a0, Any a1, Any a2 ){
  Any a4 = Int(0);
  Any a6 = Int(0);
  loop_start_label181: ;
  Any a8 = Int(0);
  Any a11 = Int( strlen( a2.s) );
  if ( dataAsInt( a4 ) >= dataAsInt( a11 ) ) { goto label181; };
  Any a24 = Int(0);
  Any a25 = Int( strlen( a2.s) );
  Any a14 = Char( a2.s[ a4.i ] );
  if ( dataAsInt( a14 ) != dataAsInt( a0 ) ) { goto label182; };
  a2.s[a4.i] = a1.c;
  label182: ;
  Any a19 = Int(1);
  Any a20 = wyce_add( a4, a19);
  a4 = a20;
  Any a22 = Int(0);
  goto loop_start_label181;
  label181: ;
  return a2;
}

int main (){
  Any a2 = Str("Hello World");
  Any a4 = Char('l');
  Any a5 = Char('1');
  Any a3 = x1x_repl ( a4, a5, a2 );
  println ( a3 );
  return 0;
}
