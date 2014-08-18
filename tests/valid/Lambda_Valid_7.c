#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef func_t;

Any x1x_f ( Any  );
Any x1x_g ( Any  );
Any x1x_$lambda181 ( Any  );

Any x1x_f ( Any a0 ){
  Any a4 = Int(1);
  Any a5 = wyce_add( a0, a4);
  return a5;
}

Any x1x_g ( Any a0 ){
  Any a4 = Fptr( &x1x_$lambda181, 1 );
  Any a5 = ( FUNCPARAMS_ONE a4.f.ptr )(a0);
  return a5;
}

int main (){
  Any a3 = Int(5);
  Any a6 = Int(0);
  Any a2 = x1x_g ( a3 );
  println ( a2 );
  return 0;
}

Any x1x_$lambda181 ( Any a0 ){
  Any a3 = Int(1);
  Any a4 = wyce_add( a0, a3);
  Any a7 = Int(0);
  Any a1 = x1x_f ( a4 );
  return a1;
}
