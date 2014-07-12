#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
Any g ( Any );
Any* f ( Any );

Any g ( Any a0 ){
  Any a1 = Int(1);
  Any a6 = Int(0);
  Any a8 = Int(125);
  return a1;
}

Any* f ( Any a0 ){
  Any a1 = g ( a0 );
  Any a3[] = {a1};
  int count = 0;
  loop_start_label583: ;
  if(count == a1.i )){ goto label583; }
  Any a5 = Char( a3[count] );
  count++;
  Any a7 = Int(128);
  Any a8 = wyce_neg(a7);
  Any a10 = Int(127);
  goto loop_start_label583;
  label583: ;
  return a3;
}

int main (){
  Any a3 = Int(0);
  Any *a2 = f ( a3 );
  Any *a1 = a2;
  Any *a8 = a1;
  Any a7 = toStr ( a8 );
  println ( a7 );
  return 0;
}
