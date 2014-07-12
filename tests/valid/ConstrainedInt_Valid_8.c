#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
Any f ( Any );
Any g ( Any , Any );

Any f ( Any a0 ){
  Any a2 = a0;
  Any a1 = a2;
  Any a4 = a1;
  Any a3 = toStr ( a4 );
  return a3;
}

Any g ( Any a0, Any a1 ){
