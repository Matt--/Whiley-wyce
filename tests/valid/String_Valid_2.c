#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
Any x1x_has ( Any , Any );

Any x1x_has ( Any a0, Any a1 ){
  Any a3 = Int(0);
  Any a2 = a3;
  Any a5 = Int(0);
  loop_start_label202: ;
  Any a7 = Int(0);
  Any a10 = Int( strlen( a1.s) );
  if ( dataAsInt( a2 ) >= dataAsInt( a10 ) ) { goto label202; };
  Any a22 = Int(0);
  Any a23 = Int( strlen( a1.s) );
  Any a13 = Char( a1.s[ a2.i ] );
  if ( dataAsInt( a13 ) != dataAsInt( a0 ) ) { goto label203; };
  Any a15 = Bool(true);
  return a15;
  label203: ;
  Any a17 = Int(1);
  Any a18 = wyce_add( a2 , a17);
  a2 = a18;
  Any a20 = Int(0);
  goto loop_start_label202;
  label202: ;
  Any a21 = Bool(false);
  return a21;
}

int main (){
  Any a2 = Str("Hello World");
  Any a8 = Char('l');
  Any a7 = x1x_has ( a8, a2 );
  Any a6 = toStr ( a7 );
  println ( a6 );
  Any a15 = Char('e');
  Any a14 = x1x_has ( a15, a2 );
  Any a13 = toStr ( a14 );
  println ( a13 );
  Any a22 = Char('h');
  Any a21 = x1x_has ( a22, a2 );
  Any a20 = toStr ( a21 );
  println ( a20 );
  Any a29 = Char('z');
  Any a28 = x1x_has ( a29, a2 );
  Any a27 = toStr ( a28 );
  println ( a27 );
  Any a36 = Char('H');
  Any a35 = x1x_has ( a36, a2 );
  Any a34 = toStr ( a35 );
  println ( a34 );
  return 0;
}
