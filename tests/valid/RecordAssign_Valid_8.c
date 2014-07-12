#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef record XXX bytes;

Any f ( Any );

Any f ( Any a0 ){
  Any a2 = Int(2);
  return a3;
}

int main (){
  Any a2 = Int(1);
  Any a4 = f ( a2 );
  Any a3 = a4;
  Any a10 = a3;
  Any a9 = toStr ( a10 );
  println ( a9 );
  a3 = null;
  Any a18 = a3;
  Any a17 = toStr ( a18 );
  println ( a17 );
  return 0;
}
