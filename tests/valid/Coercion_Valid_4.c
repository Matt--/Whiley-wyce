#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
Any x1x_f ( Any[] );

Any x1x_f ( Any a0[] ){
  Any *a1 = a0;
  return a1;
}

int main (){
  Any a6 = Real(1.2);
  Any a7 = Real(2.3);
  Any a8[] = {a6, a7};
  Any a5 = x1x_f ( a8 );
  Any a4 = toStr ( a5 );
  println ( a4 );
  return 0;
}
