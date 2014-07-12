#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef int nat;

Any x1x_sum ( Any );

Any x1x_sum ( Any a0 ){
  Any a2 = Int(0);
  Any a1 = a2;
  Any a4 = Int(0);
  int count = a0[0];
  loop_start_label118: ;
  if(count == a0[1]){ goto label118; }
  Any a6 = Char( a0[count] );
  count++;
  Any a8 = Int(0);
  Any a11 = wyce_add( a1 , a6);
  a1 = a11;
  Any a13 = Int(0);
  goto loop_start_label118;
  label118: ;
  Any a19 = Int(0);
  return a1;
}

int main (){
  Any a3 = Int(1);
  Any a4 = Int(2);
  Any a5 = Int(3);
  Any a6 = Int(4);
  Any a7 = Int(5);
  int count = 0;
  loop_start_label119: ;
  if(count == a1.i )){ goto label119; }
  Any a11 = Char( a8[count] );
  count++;
  Any a13 = Int(0);
  goto loop_start_label119;
  label119: ;
  Any a2 = x1x_sum ( a8 );
  Any a1 = a2;
  a13 = a1;
  Any a12 = toStr ( a13 );
  println ( a12 );
  return 0;
}
