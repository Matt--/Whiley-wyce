#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef int cr1nat;

Any x1x_f ( Any  );

Any x1x_f ( Any a0 ){
  Any a3 = toStr ( a0 );
  return a3;
}

int main (){
  Any a5 = Int(9);
  Any a9 = Int(10);
  Any a4 = x1x_f ( a5 );
  println ( a4 );
  return 0;
}
