#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef struct {Any op; Any* payload; } code;

Any x1x_f ( code  );

Any x1x_f ( code a0 ){
  Any a3 = a0.op;
  Any a4 = toStr ( a3 );
  return a4;
}

int main (){
  Any a5 = Int(1);
  Any a6 = Int(1);
  Any a7[] = {a6};
  code a8 = { a5, a7 };
  Any a11 = a8.op;
  Any a4 = x1x_f ( a8 );
  println ( a4 );
  return 0;
}
