#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef 
Any sum ( Any );

Any sum ( Any a0 ){
  Any a2 = Int(0);
  Any a1 = a2;
  loop_start_label347: ;
  if(a0.type == NULL_TYPE){ goto label348; };
