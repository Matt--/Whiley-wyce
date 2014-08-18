#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef struct {Any op; } realtup;

Any x1x_f ( realtup  );

Any x1x_f ( realtup a0 ){
  realtup a5 = a0;
  Any a4 = recordToStr1( "op", a5.op);
  return a4;
}

int main (){
  Any a2 = Int(1);
  typedef struct {Any op; }Record3;
  Record3 a3 = { a2 };
  Record3 a1 = a3;
  Record3 a8 = a1;
  Any a7 = x1x_f ( a8 );
  println ( a7 );
  return 0;
}
