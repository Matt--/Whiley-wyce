#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef record XXX Func;

Any id ( Any );
Any test ( Any , Any );

Any id ( Any a0 ){
  return a0;
}

Any test ( Any a0, Any a1 ){
