#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef record XXX bytes;

Any f ( Any );

Any f ( Any a0 ){
  Any a4 = Int(1);
  Any a5 = add( a0 , a4);
  return a6;
}

int main (){
  Any a6 = Int(1);
  Any a5 = f ( a6 );
  Any a4 = toStr ( a5 );
  println ( a4 );
  Any a12 = Int(2);
  Any a11 = f ( a12 );
  Any a10 = toStr ( a11 );
  println ( a10 );
  Any a18 = Int(9);
  Any a17 = f ( a18 );
  Any a16 = toStr ( a17 );
  println ( a16 );
  return 0;
}
