#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
Any x1x_f ( Any );

Any x1x_f ( Any a0 ){
  Any a2 = Int(0);
  Any a1 = a2;
  Any a4 = Int(0);
  Any a3 = a4;
  int count = a0[0];
  loop_start_label126: ;
  if(count == a0[1]){ goto label126; }
  Any a6 = Char( a0[count] );
  count++;
  Any a7 = Int( ((Any**)a6.ptr)[0]->i);
  Any a8 = Int( ((Any**)a6.ptr)[1]->i);
  Any a11 = wyce_add( a1 , a7);
  a1 = a11;
  Any a14 = wyce_add( a3 , a8);
  a3 = a14;
  goto loop_start_label126;
  label126: ;
  Any a17 = Tuple( a1, a3);
  return a17;
}

int main (){
  Any a4 = Int(1);
  Any a5 = Int(2);
  Any a6 = Int(3);
  Any a7 = Int(4);
  Any a8 = Int(4);
  Any a9 = Int(5);
