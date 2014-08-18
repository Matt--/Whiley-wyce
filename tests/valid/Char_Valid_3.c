#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
Any x1x_rep ( Any , Any , Any  );

Any x1x_rep ( Any a0, Any a1, Any a2 ){
  Any a4 = Int(0);
  Any a6 = Int(0);
  loop_start_label145: ;
  Any a8 = Int(0);
  Any a11 = Int( strlen( a2.s) );
  if ( dataAsInt( a4 ) >= dataAsInt( a11 ) ) { goto label145; };
  Any a24 = Int(0);
  Any a25 = Int( strlen( a2.s) );
  Any a14 = Char( a2.s[ a4.i ] );
  if ( dataAsInt( a14 ) != dataAsInt( a0 ) ) { goto label146; };
  a2.s[a4.i] = a1.c;
  label146: ;
  Any a19 = Int(1);
  Any a20 = wyce_add( a4, a19);
  a4 = a20;
  Any a22 = Int(0);
  goto loop_start_label145;
  label145: ;
  return a2;
}

int main (){
  Any a5 = Char('e');
  Any a6 = Char('w');
  Any a7 = Str("Hello");
  Any a4 = x1x_rep ( a5, a6, a7 );
  println ( a4 );
  Any a12 = Char('H');
  Any a13 = Char('z');
  Any a14 = Str("Hello");
  Any a11 = x1x_rep ( a12, a13, a14 );
  println ( a11 );
  Any a19 = Char('o');
  Any a20 = Char('1');
  Any a21 = Str("Hello");
  Any a18 = x1x_rep ( a19, a20, a21 );
  println ( a18 );
  return 0;
}
