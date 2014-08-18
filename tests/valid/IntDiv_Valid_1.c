#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
Any x1x_f ( Any , Any  );

Any x1x_f ( Any a0, Any a1 ){
  Any a7 = Int(0);
  Any a6 = wyce_div( a0, a1);
  return a6;
}

int main (){
  Any a3 = Int(10);
  Any a4 = Int(2);
  Any a8 = Int(0);
  Any a2 = x1x_f ( a3, a4 );
  a8 = toStr ( a2 );
  println ( a8 );
  return 0;
}
