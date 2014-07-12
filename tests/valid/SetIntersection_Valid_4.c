#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
Any f ( Any , Any , Any );
Any g ( Any );
Any h ( Any , Any );

Any f ( Any a0, Any a1, Any a2 ){
  Any a4 = a0;
  Any a3 = toStr ( a4 );
  return a3;
}

Any g ( Any a0 ){
  Any a1 = f ( a0, a0, a0 );
  return a1;
}

Any h ( Any a0, Any a1 ){
