#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
Any x1x_f ( Any  );

Any x1x_f ( Any a0 ){
  Any a1 = Int(1);
  return a1;
}

int main (){
  Any a2 = Int(1);
  Any a4 = Int(2);
  Any a10 = wyce_add( a2, a4);
  println ( a10 );
  return 0;
}
