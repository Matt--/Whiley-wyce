#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef int nat;

Any x1x_sum ( Any , Any );

Any x1x_sum ( Any a0, Any a1 ){
  Any a3 = Int(0);
  Any a2 = a3;
  Any a5 = Int(0);
  a0, a1};
  int count = a8[0];
  loop_start_label149: ;
  if(count == a8[1]){ goto label149; }
  Any a9 = Char( a8[count] );
  count++;
  Any a11 = Int(0);
  Any a13 = Int(1);
  Any a14 = wyce_add( a2 , a13);
  a2 = a14;
  Any a16 = Int(0);
  goto loop_start_label149;
  label149: ;
  Any a20 = Int(0);
  return a2;
}

int main (){
  Any a6 = Int(0);
  Any a7 = Int(10);
  Any a5 = x1x_sum ( a6, a7 );
  Any a4 = toStr ( a5 );
  println ( a4 );
  Any a13 = Int(10);
  Any a14 = Int(13);
  Any a12 = x1x_sum ( a13, a14 );
  Any a11 = toStr ( a12 );
  println ( a11 );
  return 0;
}
