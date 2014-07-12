#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"

int main (){
  Any a2 = Int(1234567891011121314151617181920);
  Any a4 = Int(1);
  Any a5 = wyce_add( a2 , a4);
  Any a1 = a5;
  Any a10 = a1;
  Any a9 = toStr ( a10 );
  println ( a9 );
  return 0;
}
