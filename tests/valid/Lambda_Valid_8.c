#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef func;

Any x1x_g ( Any , Any );
Any x1x_f1 ( Any );
Any x1x_f2 ( Any );
Any x1x_$lambda140 ( Any , Any );
Any x1x_$lambda223 ( Any , Any );

Any x1x_g ( Any a0, Any a1 ){
  Any a4 = wyce_add( a0 , a1);
  return a4;
}

Any x1x_f1 ( Any a0 ){
  Any a1 = Fptr( &x1x_$lambda140, 2 );
  return a1;
}

Any x1x_f2 ( Any a0 ){
  Any a1 = Fptr( &x1x_$lambda223, 2 );
  return a1;
}

int main (){
  Any a3 = Int(10);
  Any a2 = x1x_f1 ( a3 );
  Any a1 = a2;
  Any a6 = Int(20);
  Any a5 = x1x_f2 ( a6 );
  Any a4 = a5;
  Any a11 = a1;
  Any a12 = Int(1);
  Any a10 = ( FUNCPARAMS_ONE a11.f.ptr )(a12);
  println ( a10 );
  Any a17 = a4;
  Any a18 = Int(1);
  Any a16 = ( FUNCPARAMS_ONE a17.f.ptr )(a18);
  println ( a16 );
  return 0;
}

Any x1x_$lambda140 ( Any a0, Any a1 ){
  Any a2 = x1x_g ( a1, a0 );
  return a2;
}

Any x1x_$lambda223 ( Any a0, Any a1 ){
  Any a2 = x1x_g ( a0, a1 );
  return a2;
}
