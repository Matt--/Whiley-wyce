#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
Any x1x_f ( Any );
Any x1x_g ( Any , Any );
Any x1x_$lambda193 ( Any );

Any x1x_f ( Any a0 ){
  Any a2 = Int(1);
  Any a3 = wyce_add( a0 , a2);
  return a3;
}

Any x1x_g ( Any a0, Any a1 ){
  Any a3 = a0;
