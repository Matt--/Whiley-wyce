#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef record XXX R1;
typedef record XXX R2;

Any f ( Any );

Any f ( Any a0 ){
  return a2;
}

int main (){
  Any a6 = Int(123542);
  Any a5 = f ( a7 );
  Any a4 = toStr ( a5 );
  println ( a4 );
  return 0;
}
