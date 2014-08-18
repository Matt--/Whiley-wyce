#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef struct {Any op; Any payload; } msgType1;
typedef struct {Any header; Any op; Any rest; } msgType2;

Any x1x_f ( Any );

Any x1x_f ( Any a0 ){
  Any a3 = a0.op;
  Any a1 = toStr ( a3 );
  return a1;
}

int main (){
  Any a5 = Int(1);
  Any a6 = Int(1);
  label648: ;
  Any a7 = Int(2);
  Any a8 = Int(3);
  Any a9[] = {a6, a7, a8};
  msgType1 *a10 = { a5, a9 };
  if( !a10.type == ){ goto label648; };
  Any a13 = a10.op;
  Any a16 = Int(1);
  if( !a10.type == ){ goto label648; };
  a13 = a10.op;
  Any a17 = Int(2);
  Any a4 = x1x_f ( a10 );
  println ( a4 );
  return 0;
}
