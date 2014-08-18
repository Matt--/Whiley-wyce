#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef int fr4nat;

Any x1x_g ( Any  );
Any x1x_f ( Any  );

Any x1x_g ( Any a0 ){
  Any a2 = Int(1);
  Any a3 = wyce_add( a0, a2);
  Any a6 = Int(0);
  return a3;
}

Any x1x_f ( Any a0 ){
  Any a1 = toStr ( a0 );
  return a1;
}

int main (){
  Any a2 = Int(1);
  Any a12 = Int(0);
  Any a7 = x1x_g ( a2 );
  Any a11 = Int(0);
  Any a6 = x1x_f ( a7 );
  println ( a6 );
  return 0;
}
