#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef struct {Any lhs; Any rhs; } BinOp;

Any x1x_f ( Any );

Any x1x_f ( Any a0 ){
  if(a0.type == ){ goto label108; };
  goto label109;
  label108: ;
  Any a2 = Int( sizeof( a0 ) / sizeof( a0[0] ) );
  return a2;
  label109: ;
  Any a3 = Int(0);
  return a3;
}

int main (){
  Any a3 = Real(1.0);
  Any a4 = Real(2.0);
  Any a5 = Real(3.0);
  Any a6[] = {a3, a4, a5};
  Any a2 = x1x_f ( a6 );
  Any a1 = a2;
  Any a11 = a1;
  Any a10 = toStr ( a11 );
  println ( a10 );
  Any a13 = Real(1.234);
  Any a12 = x1x_f ( a13 );
  a1 = a12;
  Any a18 = a1;
  Any a17 = toStr ( a18 );
  println ( a17 );
  return 0;
}
