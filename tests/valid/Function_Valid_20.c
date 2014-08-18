#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef int fr2nat;

Any x1x_f ( Any  );

Any x1x_f ( Any a0 ){
  Any a1 = toStr ( a0 );
  return a1;
}

int main (){
  Any a2 = Int(1);
  Any a11 = Int(0);
  Any a6 = x1x_f ( a2 );
  println ( a6 );
  return 0;
}
