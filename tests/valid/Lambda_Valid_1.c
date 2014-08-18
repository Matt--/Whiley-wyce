#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef func;

Any x1x_g ( void );
Any x1x_$lambda95 ( Any  );

Any x1x_g (void){
  Any a0 = Fptr( &x1x_$lambda95, 1 );
  return a0;
}

int main (){
  Any a2 = x1x_g (  );
  Any a8 = Int(1);
  Any a6 = ( FUNCPARAMS_ONE a2.f.ptr )(a8);
  println ( a6 );
  Any a14 = Int(2);
  Any a12 = ( FUNCPARAMS_ONE a2.f.ptr )(a14);
  println ( a12 );
  Any a20 = Int(3);
  Any a18 = ( FUNCPARAMS_ONE a2.f.ptr )(a20);
  println ( a18 );
  return 0;
}

Any x1x_$lambda95 ( Any a0 ){
  Any a2 = Int(1);
  Any a3 = wyce_add( a0, a2);
  return a3;
}
