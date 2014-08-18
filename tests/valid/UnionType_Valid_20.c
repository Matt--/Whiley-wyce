#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef struct {Any index; Any op; } STORE;
typedef struct {Any offset; Any op; } BRANCH;

Any x1x_f ( Any );

Any x1x_f ( Any a0 ){
  Any a2 = a0;
  Any a1 = toStr ( a2 );
  return a1;
}

int main (){
  Any a2 = Int(1);
  Any a3 = Int(0);
  STORE a4 = { a2, a3 };
  STORE a1 = a4;
  label158: ;
  STORE a9 = a1;
  if( !a9.type == ){ goto label158; };
  Any a12 = a9.op;
  label159: ;
  if( !a9.type == ){ goto label159; };
  a12 = a9.op;
  a12 = a9.offset;
  Any a14 = Int(32768);
  Any a15 = wyce_neg(a14);
  Any a17 = Int(32768);
  Any a8 = x1x_f ( a9 );
  println ( a8 );
  return 0;
}
