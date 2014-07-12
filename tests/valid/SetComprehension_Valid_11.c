#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
Any f ( Any );

Any f ( Any a0 ){
  Any a2 = ;
  int count = a0[0];
  loop_start_label42: ;
  if(count == a0[1]){ goto label42; }
  Any a1 = Char( a0[count] );
  count++;
  Any a4 = wyce_neg(a1);
