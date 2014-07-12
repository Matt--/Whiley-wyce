#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
Any g ( Any );

Any g ( Any a0 ){
  Any a2 = a0;
  Any a1 = toStr ( a2 );
  return a1;
}

int main (){
  Any a2 = Int(1);
  Any a10 = ;
  Any a6 = g ( a2 );
  println ( a6 );
  return 0;
}
