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
  Any a5 = Int(1);
  Any a6 = Int(4);
  Any a4 = f ( a7 );
  println ( a4 );
  Any a12 = ;
  Any a11 = f ( a12 );
  println ( a11 );
  Any a17 = ;
  Any a16 = f ( a17 );
  println ( a16 );
  return 0;
}
