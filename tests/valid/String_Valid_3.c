#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
Any x1x_has ( Any , Any );

Any x1x_has ( Any a0, Any a1 ){
  int count = 0;
  loop_start_label204: ;
  if(count == strlen(a1.s) ){ goto label204; }
  Any a3 = Char( a1.s[count] );
  count++;
  if ( dataAsInt( a0 ) != dataAsInt( a3 ) ) { goto label205; };
  Any a6 = Bool(true);
  return a6;
  label205: ;
  goto loop_start_label204;
  label204: ;
  Any a7 = Bool(false);
  return a7;
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
