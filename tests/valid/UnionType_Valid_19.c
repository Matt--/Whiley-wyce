#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef int utr12nat;
typedef struct {Any il; Any op; } tupper;

Any x1x_f ( tupper );

Any x1x_f ( tupper a0 ){
  Any a2 = a0.op;
  return a2;
}

int main (){
  Any a2 = Int(1);
  Any a3 = Int(1);
  Any a1 = Null();
  Any a9 = a1;
  Any a8 = toStr ( a9 );
  println ( a8 );
  return 0;
}
