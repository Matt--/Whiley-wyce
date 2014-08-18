#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef struct {Any op; Any payload; } code;

Any x1x_f ( Any  );

Any x1x_f ( Any a0 ){
  Any a3 [10];
  typedef struct {Any op; Any payload; }Record4;
  Record4 a4 = { a0, a3 };
  Record4 a1 = a4;
  Record4 a6 = a1;
  Any a5 = recordToStr2( "op", a6.op, "payload", a6.payload);
  return a5;
}

int main (){
  Any a5 = Int(1);
  Any a4 = x1x_f ( a5 );
  println ( a4 );
  return 0;
}
