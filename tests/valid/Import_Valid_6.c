#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"

int main (){
  Any a2 = Int(1);
  Any a4 = Int(2);
  Any a10 = wyce_add( a2 , a4);
  println ( a10 );
  return 0;
}
