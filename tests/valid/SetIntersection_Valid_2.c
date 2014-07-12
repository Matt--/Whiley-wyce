#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
Any f ( Any );
Any g ( Any );

Any f ( Any a0 ){
  Any a2 = a0;
  Any a1 = toStr ( a2 );
  return a1;
}

Any g ( Any a0 ){
  Any a3 = Int(1);
  Any a4 = Int(2);
  Any a5 = Int(3);
