#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
Any f ( Any , Any , Any );
Any g ( Any );
Any h ( Any , Any );

Any f ( Any a0, Any a1, Any a2 ){
  Any a8 = a0;
  Any a7 = toStr ( a8 );
  return a7;
}

Any g ( Any a0 ){
