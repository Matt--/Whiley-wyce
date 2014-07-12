#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef typedef 
Any toString ( Any );

Any toString ( Any a0 ){
  if(a0.type == ){ goto label164; };
  goto label165;
  label164: ;
  if(a0.type == REAL_TYPE){ goto label164; };
  goto label166;
  Any a2 = a0;
  Any a1 = toStr ( a2 );
  return a1;
  label166: ;
