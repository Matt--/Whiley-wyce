#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
Any f ( Any );

Any f ( Any a0 ){
  Any a7 = ;
  int count = a0[0];
  loop_start_label33: ;
  if(count == a0[1]){ goto label33; }
  Any a6 = Char( a0[count] );
  count++;
  Any a9 = wyce_neg(a6);
