#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"

int main (){
  Any a2 = Int(1);
  Any a3 = Int(2);
  Any a4 = Int(3);
  Any a5[] = {a2, a3, a4};
  Any a7 = Int( sizeof( a5 ) / sizeof( a5[0] ) );
  Any a8 = Int(3);
  Any a14 = Int(0);
  Any a16 = Int(0);
  Any a17 = Int( sizeof( a5 ) / sizeof( a5[0] ) );
  Any a15 = a5[a14.i];
  Any a12 = toStr ( a15 );
  println ( a12 );
  return 0;
}
