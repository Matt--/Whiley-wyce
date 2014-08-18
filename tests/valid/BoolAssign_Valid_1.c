#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"

int main (){
  Any a2 = Bool(true);
  println ( a2 );
  Any a7 = Bool(false);
  a2 = a7;
  println ( a2 );
  return 0;
}
