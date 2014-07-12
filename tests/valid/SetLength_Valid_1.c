#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"

int main (){
  Any a2 = Int(1);
  Any a3 = Int(2);
  Any a4 = Int(3);
  Any a11 = Int( sizeof( a5 ) / sizeof( a5[0] ) );
  Any a9 = toStr ( a11 );
  println ( a9 );
  return 0;
}
