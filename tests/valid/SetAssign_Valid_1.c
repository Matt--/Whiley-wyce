#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
Any f ( Any );

Any f ( Any a0 ){
  Any a5 = a0;
  Any a4 = toStr ( a5 );
  return a4;
}

int main (){
  Any a2 = Int(1);
  Any a3 = Int(2);
  Any a4 = Int(3);
  Any a15 = Int( sizeof( a5 ) / sizeof( a5[0] ) );
  Any a16 = Int(0);
  Any a11 = f ( a5 );
  println ( a11 );
  return 0;
}
