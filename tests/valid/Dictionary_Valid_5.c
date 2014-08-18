#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
Any x1x_reverse ( Any );

Any x1x_reverse ( Any a0 ){
  Any a1 = ;
  Any a3 = Int(0);
  Any a5 = Int( strlen( a0.s) );
  a3, a5};
  int count = a6[0];
  loop_start_label225: ;
  if(count == a6[1]){ goto label225; }
  Any a7 = Char( a6[count] );
  count++;
  Any a15 = Int(0);
  Any a16 = Int( strlen( a0.s) );
  Any a11 = Char( a0.s[ a7.i ] );
  Any a13 = a7;
  a1[a11.i] = a13;
  goto loop_start_label225;
  label225: ;
  return a1;
}

int main (){
  Any a3 = Str("abcdefghijklmnopqrstuvwxyz");
  Any a2 = x1x_reverse ( a3 );
  Any a1 = a2;
  Any a8 = a1;
  Any a7 = toStr ( a8 );
  println ( a7 );
  return 0;
}
