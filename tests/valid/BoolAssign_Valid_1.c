#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"

int main (){
  Any a2 = Bool(true);
  Any a1 = a2;
  Any a6 = a1;
  println ( a6 );
  Any a7 = Bool(false);
  a1 = a7;
  Any a11 = a1;
  println ( a11 );
  return 0;
}
