#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
Any x1x_f ( Any );

Any x1x_f ( Any a0 ){
  Any a2 = Int(0);
  Any a1 = a2;
  int count = a0[0];
  loop_start_label114: ;
  if(count == a0[1]){ goto label114; }
  Any a4 = Char( a0[count] );
  count++;
  Any a7 = wyce_add( a1 , a4);
  a1 = a7;
  goto loop_start_label114;
  label114: ;
  return a1;
}

int main (){
  Any a2 = Int(1);
  Any a3 = Int(2);
  Any a4 = Int(3);
  Any a5 = Int(4);
  Any a6 = Int(5);
  Any a7[] = {a2, a3, a4, a5, a6};
  Any *a1 = a7;
  Any *a12 = a1;
  Any a11 = x1x_f ( a12 );
  println ( a11 );
  Any a14 = Int(10);
  Any a15 = Int(20);
  Any a16 = Int(30);
  Any a17 = Int(40);
  Any a18 = Int(50);
  Any a13 = @ignore;
  Any a24 = a13;
  Any a23 = x1x_f ( a24 );
  println ( a23 );
  return 0;
}
