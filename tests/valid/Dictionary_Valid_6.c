#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
Any get ( Any );

Any get ( Any a0 ){
  Any a2 = Str("x");
  Any a3 = a0[a2.i];
  return a3;
}

int main (){
