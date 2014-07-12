#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
Any f ( Any );
Any g ( Any );

Any f ( Any a0 ){
  Any a5 = a0;
  Any a4 = toStr ( a5 );
  return a4;
}

Any g ( Any a0 ){
  Any a3 = Int(1);
