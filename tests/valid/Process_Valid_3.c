#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
const double out = 123.456 ;


int main (){
  Any a4 = Str("Hello World");
  println ( a4 );
  return 0;
}
