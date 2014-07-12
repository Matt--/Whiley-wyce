#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"

int main (){
  Any a2 = Int(1);
  Any a3 = Int(2);
  Any a4 = Int(3);
  Any a5 = Int(4);
  Any a1 = @ignore;
  Any a11 = a1;
  Any a10 = toStr ( a11 );
  println ( a10 );
  return 0;
}
