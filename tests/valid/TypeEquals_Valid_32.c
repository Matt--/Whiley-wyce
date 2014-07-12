#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
Any g ( Any );
Any f ( Any );

Any g ( Any a0 ){
  Any a2 = Int(1);
  Any a3 = neg(a2);
