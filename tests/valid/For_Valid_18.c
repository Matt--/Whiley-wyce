#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
Any x1x_sum ( Any );

Any x1x_sum ( Any a0 ){
  Any a2 = Int(0);
  Any a1 = a2;
  int count = a0[0];
  loop_start_label136: ;
  if(count == a0[1]){ goto label136; }
  Any a4 = Char( a0[count] );
  count++;
  Any a7 = wyce_add( a1 , a4);
  a1 = a7;
  goto loop_start_label136;
  label136: ;
  return a1;
}

int main (){
  Any a3 = Int(1);
  Any a4 = Int(2);
  Any a5 = Int(3);
  Any a6 = Int(4);
  Any a7 = Int(5);
  int count = 0;
  loop_start_label137: ;
  if(count == a1.i )){ goto label137; }
  Any a11 = Char( a8[count] );
  count++;
  Any a13 = Int(0);
  goto loop_start_label137;
  label137: ;
  Any a2 = x1x_sum ( a8 );
  Any a1 = a2;
  a13 = a1;
  Any a12 = toStr ( a13 );
  println ( a12 );
  return 0;
}
