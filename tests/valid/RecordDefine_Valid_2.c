#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef record XXX Point;

Any f ( Any );

Any f ( Any a0 ){
  return a0;
}

int main (){
  Any a3 = Int(1);
  Any a4 = Int(1);
  Any a2 = f ( a5 );
  Any a1 = a2;
  Any a10 = a1;
  Any a9 = toStr ( a10 );
  println ( a9 );
  return 0;
}
