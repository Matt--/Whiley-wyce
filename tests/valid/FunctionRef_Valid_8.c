#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
Any x1x_read ( Any  );
Any x1x_id ( Any  );
Any x1x_test ( Any , Any  );

Any x1x_read ( Any a0 ){
  Any a2 = wyce_neg(a0);
  return a2;
}

Any x1x_id ( Any a0 ){
  return a0;
}

Any x1x_test ( Any a0, Any a1 ){
  Any a2 = ( FUNCPARAMS_ONE a0.f.ptr )(a1);
  return a2;
}

int main (){
  Any a3 = Fptr( &x1x_id, 1 );
  Any a4 = Int(1);
  Any a2 = x1x_test ( a3, a4 );
  Any a8 = toStr ( a2 );
  println ( a8 );
  Any a11 = Fptr( &x1x_id, 1 );
  Any a12 = Int(123);
  Any a10 = x1x_test ( a11, a12 );
  a2 = a10;
  Any a16 = toStr ( a2 );
  println ( a16 );
  Any a19 = Fptr( &x1x_id, 1 );
  Any a20 = Int(223);
  Any a18 = x1x_test ( a19, a20 );
  a2 = a18;
  Any a24 = toStr ( a2 );
  println ( a24 );
  return 0;
}
