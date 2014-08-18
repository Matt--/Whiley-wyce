#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef func;

Any x1x_g ( Any  );
Any x1x_$lambda100 ( Any , Any  );

Any x1x_g ( Any a0 ){
  Any a1 = Fptr( &x1x_$lambda100, 2 );
  return a1;
}

int main (){
  Any a3 = Int(3);
  Any a2 = x1x_g ( a3 );
  Any a9 = Int(1);
  Any a7 = ( FUNCPARAMS_ONE a2.f.ptr )(a9);
  println ( a7 );
  Any a15 = Int(2);
  Any a13 = ( FUNCPARAMS_ONE a2.f.ptr )(a15);
  println ( a13 );
  Any a21 = Int(3);
  Any a19 = ( FUNCPARAMS_ONE a2.f.ptr )(a21);
  println ( a19 );
  Any a23 = Int(19);
  Any a22 = x1x_g ( a23 );
  a2 = a22;
  Any a29 = Int(1);
  Any a27 = ( FUNCPARAMS_ONE a2.f.ptr )(a29);
  println ( a27 );
  Any a35 = Int(2);
  Any a33 = ( FUNCPARAMS_ONE a2.f.ptr )(a35);
  println ( a33 );
  Any a41 = Int(3);
  Any a39 = ( FUNCPARAMS_ONE a2.f.ptr )(a41);
  println ( a39 );
  return 0;
}

Any x1x_$lambda100 ( Any a0, Any a1 ){
  Any a4 = wyce_add( a0, a1);
  return a4;
}
