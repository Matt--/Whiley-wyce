#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
Any x1x_f ( Any  );
Any x1x_g ( Any  );

Any x1x_f ( Any a0 ){
  Any a2 = Int(12);
  Any a3 = wyce_mul( a0, a2);
  return a3;
}

Any x1x_g ( Any a0 ){
  Any a3 = Int(1);
  Any a1 = ( FUNCPARAMS_ONE a0.f.ptr )(a3);
  return a1;
}

int main (){
  Any a6 = Fptr( &x1x_f, 1 );
  Any a5 = x1x_g ( a6 );
  Any a4 = toStr ( a5 );
  println ( a4 );
  return 0;
}
