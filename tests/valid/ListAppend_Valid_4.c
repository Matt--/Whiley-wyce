#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
Any* x1x_append ( Any );

Any* x1x_append ( Any a0 ){
  Any a1 [10];
  Any a3 = Int(0);
  Any a5 = Int( strlen( a0.s) );
  a3, a5};
  int count = a6[0];
  loop_start_label158: ;
  if(count == a6[1]){ goto label158; }
  Any a7 = Char( a6[count] );
  count++;
  Any a15 = Int(0);
  Any a16 = Int( strlen( a0.s) );
  Any a10 = Char( a0.s[ a7.i ] );
  Any a11[] = {a10};
  #### appending arrays not yet catered for;
  a1 = Null();
  goto loop_start_label158;
  label158: ;
  return a1;
}

int main (){
  Any a3 = Str("abcdefghijklmnopqrstuvwxyz");
  Any a2 = x1x_append ( a3 );
  Any a1 = a2;
  Any a8 = a1;
  Any a7 = toStr ( a8 );
  println ( a7 );
  return 0;
}
