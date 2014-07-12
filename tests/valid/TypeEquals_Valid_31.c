#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef int pos;
typedef record XXX rec1;
typedef record XXX rec2;
typedef record XXX rec12;

Any f ( Any );

Any f ( Any a0 ){
  Any a1 = Int(1);
  return a1;
}

int main (){
  Any a2 = Str("hello");
  Any a3 = Int(2);
  Any a1 = null;
  Any a6 = Int(1);
  Any a7 = Int(0);
  Any a5 = null;
  Any a13 = a1;
  Any a12 = f ( a13 );
  println ( a12 );
  Any a18 = a5;
  Any a17 = f ( a18 );
  println ( a17 );
  return 0;
}
