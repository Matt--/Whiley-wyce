#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef C1;
typedef C2;
typedef C3;

Any x1x_f ( Any );
Any x1x_g ( Any );
Any x1x_h ( Any );
Any x1x_i ( Any );

Any x1x_f ( Any a0 ){
  return a0;
}

Any x1x_g ( Any a0 ){
  return a0;
}

Any x1x_h ( Any a0 ){
  return a0;
}

Any x1x_i ( Any a0 ){
  return a0;
}

int main (){
  Any a3 = Null();
  Any a2 = x1x_f ( a3 );
  Any a7 = toStr ( a2 );
  println ( a7 );
  return 0;
}
