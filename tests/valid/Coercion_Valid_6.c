#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
Any x1x_f ( Any[] );

Any x1x_f ( Any a0[] ){
  Any *a1 = a0;
  return a1;
}

int main (){
  Any a3 = Real(2.2);
  Any a4 = Real(3.3);
  Any a5[] = {a3, a4};
  Any a2 = x1x_f ( a5 );
  Any a1 = a2;
  Any a10 = a1;
  Any a9 = toStr ( a10 );
  println ( a9 );
  return 0;
}
