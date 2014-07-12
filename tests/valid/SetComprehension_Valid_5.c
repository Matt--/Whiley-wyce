#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef 
Any f ( Any );

Any f ( Any a0 ){
  Any a2 = ;
  label1288: ;
  int count = a0[0];
  loop_start_label1287: ;
  if(count == a0[1]){ goto label1287; }
  Any a1 = a0[count];
  count++;
  if(a1.type == INT_TYPE){ goto label1288; };
  goto label1289;
