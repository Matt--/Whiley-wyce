#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef int nat;

Any* f ( Any[] );

Any* f ( Any a0[] ){
  int count = 0;
  loop_start_label10: ;
  if(count == a1.i )){ goto label10; }
  Any a6 = Char( a0[count] );
  count++;
  Any a8 = Int(0);
  goto loop_start_label10;
  label10: ;
  return a0;
}

int main (){
  Any a3 [10];
  Any a6 = Int( sizeof( a3 ) / sizeof( a3[0] ) );
  Any a7 = Int(0);
  Any *a2 = f ( a3 );
  Any *a1 = a2;
  Any *a8 = a1;
  a7 = toStr ( a8 );
  println ( a7 );
  return 0;
}
