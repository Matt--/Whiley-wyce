#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
Any f ( Any );

Any f ( Any a0 ){
  Any a2 = a0;
  Any a1 = toStr ( a2 );
  return a1;
}

int main (){
  Any a2 = Int(1);
  Any a3 = Int(2);
  Any a4 = Int(3);
  Any a5 = Int(4);
  Any a6 = Int(5);
  Any a7 = Int(6);
  Any a8 = Int(7);
  Any a9 = Int(8);
  Any a10 = Int(9);
  Any a17 = f ( a11 );
  println ( a17 );
  return 0;
}
