#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
Any constantPool ( );

Any constantPool (){
  Any a0 = Int(12478623847120981);
  return a0;
}

int main (){
  Any a2 = constantPool (  );
  Any a1 = a2;
  Any a6 = Str("GOT: ");
  Any a8 = a1;
  Any a7 = toStr ( a8 );
  Any a9 = Str( strcat ( a6.s , a7.s ) );
  println ( a9 );
  return 0;
}
