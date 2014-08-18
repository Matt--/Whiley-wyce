#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"

int main (){
  Any a2 = Int(1);
  Any a3 = Int(1);
  Any a4 = Int(2);
  Any a1 = Null();
  Any a10 = a1;
  Any a9 = toStr ( a10 );
  println ( a9 );
  return 0;
}
