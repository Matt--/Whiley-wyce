#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef int pos;
typedef int neg;
typedef int posneg;

Any x1x_isPosNeg ( Any );

Any x1x_isPosNeg ( Any a0 ){
  if(a0.type == INT_TYPE){ goto label39; };
  goto label40;
  label39: ;
  goto label41;
  label40: ;
  goto label42;
  label41: ;
  Any a1 = Bool(true);
  return a1;
  label42: ;
  Any a2 = Bool(false);
  return a2;
}

int main (){
  Any a5 = Int(1);
  Any a4 = x1x_isPosNeg ( a5 );
  println ( a4 );
  Any a10 = Int(0);
  Any a9 = x1x_isPosNeg ( a10 );
  println ( a9 );
  Any a15 = Int(1);
  Any a16 = wyce_neg(a15);
  Any a14 = x1x_isPosNeg ( a16 );
  println ( a14 );
  return 0;
}
