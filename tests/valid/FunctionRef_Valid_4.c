#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef func;

Any x1x_f1 ( Any );
Any x1x_f2 ( Any );
Any x1x_g ( Any );

Any x1x_f1 ( Any a0 ){
  return a0;
}

Any x1x_f2 ( Any a0 ){
  Any a2 = wyce_neg(a0);
  return a2;
}

Any x1x_g ( Any a0 ){
  Any a2 = ;
  Any a8 = Int(0);
  Any a9 = Int( sizeof( a2 ) / sizeof( a2[0] ) );
  Any a4 = a2[a0.i];
  Any a1 = a4;
  Any a6 = a1;
  Any a7 = Int(123);
  Any a5 = ( FUNCPARAMS_ONE a6.f.ptr )(a7);
  return a5;
}

int main (){
  Any a6 = Int(0);
  Any a5 = x1x_g ( a6 );
  Any a4 = toStr ( a5 );
  println ( a4 );
  Any a12 = Int(1);
  Any a11 = x1x_g ( a12 );
  Any a10 = toStr ( a11 );
  println ( a10 );
  return 0;
}
