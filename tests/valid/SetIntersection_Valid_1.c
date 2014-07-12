#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
Any f ( Any );
Any g ( Any );

Any f ( Any a0 ){
  Any a7 = a0;
  Any a6 = toStr ( a7 );
  return a6;
}

Any g ( Any a0 ){
  Any a3 = Int(1);
  Any a4 = Int(2);
  Any a5 = Int(3);
