#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef record XXX bytes;

Any f ( Any );

Any f ( Any a0 ){
  Any a8 = Int(1);
  Any a9 = add( a0 , a8);
