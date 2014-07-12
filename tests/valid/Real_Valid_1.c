#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"

int main (){
  Any a2 = Real(1.20);
  Any a4 = Real(2.40);
  Any a10 = wyce_add( a2 , a4);
  println ( a10 );
  Any a16 = wyce_sub( a4 , a2);
  println ( a16 );
  Any a29 = Real(0);
  Any a22 = wyce_div( a2 , a4);
  println ( a22 );
  Any a28 = wyce_mul( a2 , a4);
  println ( a28 );
  return 0;
}
