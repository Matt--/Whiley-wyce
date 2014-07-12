#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"

int main (){
  Any a2 = Int(0);
  Any a3 = Bool(true);
  Any a1 = null;
  Any a9 = a1;
  Any a8 = toStr ( a9 );
  println ( a8 );
  Any a10 = Bool(false);
