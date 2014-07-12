#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef record XXX R1;
typedef record XXX R2;
typedef record XXX R3;

Any f ( Any );

Any f ( Any a0 ){
  return a2;
}

int main (){
  Any a6 = Int(123542);
  Any a7 = Int(123);
  Any a5 = f ( a8 );
  Any a4 = toStr ( a5 );
  println ( a4 );
  return 0;
}
