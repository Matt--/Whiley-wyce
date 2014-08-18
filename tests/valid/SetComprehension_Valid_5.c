#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
Any x1x_f ( Any );

Any x1x_f ( Any a0 ){
  Any a2 = ;
  label626: ;
  int count = a0[0];
  loop_start_label625: ;
  if(count == a0[1]){ goto label625; }
  Any a1 = Char( a0[count] );
  count++;
  if(a1.type == INT_TYPE){ goto label626; };
  goto label627;
