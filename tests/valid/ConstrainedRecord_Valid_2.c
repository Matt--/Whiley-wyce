#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef struct {Any op; } UNIT;

Any x1x_f ( UNIT );

Any x1x_f ( UNIT a0 ){
  Any a2 = a0.op;
  return a2;
}

int main (){
  Any a3 = Int(0);
  UNIT a4 = { a3 };
  Any a7 = a4.op;
  Any a2 = x1x_f ( a4 );
  Any a1 = a2;
  Any a9 = a1;
  a8 = toStr ( a9 );
  println ( a8 );
  return 0;
}
