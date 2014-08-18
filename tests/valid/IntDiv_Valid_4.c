#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
Any x1x_f ( Any  );

Any x1x_f ( Any a0 ){
  Any a2 = Int(3);
  Any a4 = Int(0);
  Any a3 = wyce_div( a0, a2);
  return a3;
}

int main (){
  Any a6 = Int(10);
  Any a5 = x1x_f ( a6 );
  Any a4 = toStr ( a5 );
  println ( a4 );
  return 0;
}
