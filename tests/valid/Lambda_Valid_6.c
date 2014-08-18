#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef func_t;

Any x1x_f ( Any  );
Any x1x_g ( Any  );
Any x1x_$lambda151 ( Any  );

Any x1x_f ( Any a0 ){
  Any a2 = Int(1);
  Any a3 = wyce_add( a0, a2);
  return a3;
}

Any x1x_g ( Any a0 ){
  Any a2 = Fptr( &x1x_$lambda151, 1 );
  Any a3 = ( FUNCPARAMS_ONE a2.f.ptr )(a0);
  return a3;
}

int main (){
  Any a3 = Int(5);
  Any a2 = x1x_g ( a3 );
  println ( a2 );
  return 0;
}

Any x1x_$lambda151 ( Any a0 ){
  Any a3 = Int(1);
  Any a4 = wyce_add( a0, a3);
  Any a1 = x1x_f ( a4 );
  return a1;
}
