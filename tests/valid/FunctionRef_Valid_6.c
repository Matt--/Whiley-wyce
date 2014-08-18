#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef struct {Any read; } Func;

Any x1x_id ( Any  );
Any x1x_test ( Func , Any  );

Any x1x_id ( Any a0 ){
  return a0;
}

Any x1x_test ( Func a0, Any a1 ){
  Any a4 = a0.read;
  Any a2 = ( FUNCPARAMS_ONE a4.f.ptr )(a1);
  return a2;
}

int main (){
  Any a3 = Fptr( &x1x_id, 1 );
  Func a4 = { a3 };
  Any a5 = Int(123);
  Any a2 = x1x_test ( a4, a5 );
  Any a9 = Str("GOT: ");
  Any a10 = toStr ( a2 );
  Any a12 = Str( strcat ( a9.s , a10.s ) );
  println ( a12 );
  Any a14 = Fptr( &x1x_id, 1 );
  Func a15 = { a14 };
  Any a16 = Int(12545);
  Any a13 = x1x_test ( a15, a16 );
  a2 = a13;
  Any a20 = Str("GOT: ");
  Any a21 = toStr ( a2 );
  Any a23 = Str( strcat ( a20.s , a21.s ) );
  println ( a23 );
  Any a25 = Fptr( &x1x_id, 1 );
  Func a26 = { a25 };
  Any a27 = Int(11);
  Any a28 = wyce_neg(a27);
  Any a24 = x1x_test ( a26, a28 );
  a2 = a24;
  Any a32 = Str("GOT: ");
  Any a33 = toStr ( a2 );
  Any a35 = Str( strcat ( a32.s , a33.s ) );
  println ( a35 );
  return 0;
}
