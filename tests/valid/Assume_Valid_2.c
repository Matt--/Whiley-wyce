#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"

int main (){
  Any a1 = Int(1);
  Any a2 = Int(1);
  Any a6 = Str("ASSUMPTION PASSED!");
  println ( a6 );
  return 0;
}
