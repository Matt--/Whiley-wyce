#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
Any x1x_read ( Any );
Any x1x_id ( Any );
Any x1x_test ( Any , Any );

Any x1x_read ( Any a0 ){
  Any a2 = wyce_neg(a0);
  return a2;
}

Any x1x_id ( Any a0 ){
  return a0;
}

Any x1x_test ( Any a0, Any a1 ){
  Any a3 = a0;
