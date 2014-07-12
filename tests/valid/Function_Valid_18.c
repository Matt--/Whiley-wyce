#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef int nat;

Any x1x_abs ( Any );
Any x1x_nop ( Any );

Any x1x_abs ( Any a0 ){
  Any a1 = Int( abs ( a0.i ));;
  Any a4 = Int(0);
  return a1;
}

Any x1x_nop ( Any a0 ){
  Any a1 = Int( abs ( a0.i ));;
  return a1;
}

int main (){
  Any a3 = Int(123);
  Any a4 = wyce_neg(a3);
  Any a2 = x1x_abs ( a4 );
  Any a1 = a2;
  Any a9 = a1;
  Any a8 = toStr ( a9 );
  println ( a8 );
  Any a11 = Int(1);
  Any a15 = Int(0);
  Any a10 = x1x_nop ( a11 );
  a1 = a10;
  Any a16 = a1;
  a15 = toStr ( a16 );
  println ( a15 );
  return 0;
}
