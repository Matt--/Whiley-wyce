#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"

int main (){
  Any a4 = Str("Hello: ");
  Any a5 = Str("1223344566");
  Any a6 = Str( strcat ( a4.s , a5.s ) );
  println ( a6 );
  return 0;
}
