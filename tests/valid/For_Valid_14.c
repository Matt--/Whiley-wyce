#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
Any x1x_f ( Any );

Any x1x_f ( Any a0 ){
  Any a2 = Int(0);
  Any a1 = a2;
  int count = a0[0];
  loop_start_label115: ;
  if(count == a0[1]){ goto label115; }
  Any a4 = Char( a0[count] );
  count++;
  Any a6 = a4;
  Any a7 = wyce_add( a1 , a6);
  a1 = a7;
  goto loop_start_label115;
  label115: ;
  return a1;
}

int main (){
  Any a2 = Int(1);
  Any a3 = Int(2);
  Any a4 = Int(3);
  Any a5 = Int(4);
  Any a6 = Int(5);
  Any a7 = Int(6);
  Any a8 = Int(7);
  Any a9 = Int(8);
  Any a10[] = {a2, a3, a4, a5, a6, a7, a8, a9};
  Any *a1 = a10;
  Any *a15 = a1;
  Any a14 = x1x_f ( a15 );
  println ( a14 );
  Any a17 = Str("Hello World");
  Any a16 = a17;
  Any a22 = a16;
  Any a21 = x1x_f ( a22 );
  println ( a21 );
  return 0;
}
