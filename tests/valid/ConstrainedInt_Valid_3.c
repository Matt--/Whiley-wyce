#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef int cr3nat;

Any x1x_f ( Any  );

Any x1x_f ( Any a0 ){
  Any a1 = Int(1);
  return a1;
}

int main (){
  Any a3 = Int(9);
  Any a2 = x1x_f ( a3 );
  Any a7 = toStr ( a2 );
  println ( a7 );
  return 0;
}
