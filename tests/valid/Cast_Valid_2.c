#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef R1;

Any* x1x_f ( Any[] );

Any* x1x_f ( Any a0[] ){
  Any a2;
  
  return a2;
}

int main (){
  Any a6 = Int(1);
  Any a7 = Int(2);
  Any a8 = Int(3);
  Any a9[] = {a6, a7, a8};
  Any *a5 = x1x_f ( a9 );
  Any a4 = toStr ( a5 );
  println ( a4 );
  return 0;
}
