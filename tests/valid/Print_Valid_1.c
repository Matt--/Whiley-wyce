#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"

int main (){
  Any a5 = Int(1);
  Any a4 = toStr ( a5 );
  println ( a4 );
  return 0;
}
