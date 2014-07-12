#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
Any len ( Any );

Any len ( Any a0 ){
  Any a2 = Int( sizeof( a0 ) / sizeof( a0[0] ) );
  return a2;
}

int main (){
  Any a2 = Int(1);
  Any a3 = Int(2);
  Any a4[] = {a2, a3};
  Any *a1 = a4;
  Any *a9 = a1;
  Any a8 = len ( a9 );
  println ( a8 );
  Any a11 = Str("Hello World");
  Any a10 = a11;
  Any a16 = a10;
  Any a15 = len ( a16 );
  println ( a15 );
  return 0;
}
