#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef record XXX Link;
typedef 
Any sum_1 ( Any );
Any sum_2 ( Any );
Any sum_3 ( Any );

Any sum_1 ( Any a0 ){
  if(a0.type == NULL_TYPE){ goto label248; };
  goto label249;
  label248: ;
  Any a1 = Int(0);
  return a1;
  label249: ;
