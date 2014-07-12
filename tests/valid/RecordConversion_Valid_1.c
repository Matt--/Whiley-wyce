#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef record XXX realtup;

Any f ( Any );

Any f ( Any a0 ){
  Any a5 = a0;
  Any a4 = toStr ( a5 );
  return a4;
}

int main (){
  Any a2 = Int(1);
  Any a1 = null;
  Any a8 = a1;
  Any a7 = f ( a8 );
  println ( a7 );
  return 0;
}
