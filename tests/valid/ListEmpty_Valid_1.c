#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
Any f ( Any[] );

Any f ( Any a0[] ){
  Any *a2 = a0;
  Any a1 = toStr ( a2 );
  return a1;
}

int main (){
  Any a5 = Int(1);
  Any a6 = Int(4);
  Any a7[] = {a5, a6};
  Any a4 = f ( a7 );
  println ( a4 );
  Any a12 [10];
  Any a11 = f ( a12 );
  println ( a11 );
  return 0;
}
