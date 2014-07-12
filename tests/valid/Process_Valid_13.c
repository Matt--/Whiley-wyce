#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"

int main (){
  Any a6 = Str("GOT HERE");
  println ( a6 );
  return 0;
}
