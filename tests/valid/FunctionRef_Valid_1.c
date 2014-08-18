#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef func_t;

Any x1x_f1 ( Any  );
Any x1x_f2 ( Any  );
Any x1x_g ( Any  );

Any x1x_f1 ( Any a0 ){
  Any a2 = Int(1);
  Any a3 = wyce_add( a0, a2);
  return a3;
}

Any x1x_f2 ( Any a0 ){
  Any a2 = Int(2);
  Any a3 = wyce_mul( a0, a2);
  return a3;
}

Any x1x_g ( Any a0 ){
  Any a3 = Int(1234);
  Any a1 = ( FUNCPARAMS_ONE a0.f.ptr )(a3);
  return a1;
}

int main (){
  Any a6 = Fptr( &x1x_f1, 1 );
  Any a5 = x1x_g ( a6 );
  Any a4 = toStr ( a5 );
  println ( a4 );
  Any a12 = Fptr( &x1x_f2, 1 );
  Any a11 = x1x_g ( a12 );
  Any a10 = toStr ( a11 );
  println ( a10 );
  return 0;
}
