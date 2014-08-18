#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef struct {Any input; Any pos; } State;

Any x1x_parse ( Any );
null x1x_parseAddSubExpr ( State );

Any x1x_parse ( Any a0 ){
  Any a4 = Int(0);
  State a5 = { a0, a4 };
  Any a2 = x1x_parseAddSubExpr ( a5 );
  Any a7 = a2.e;
  return a7;
}

null x1x_parseAddSubExpr ( State a0 ){
  Any a1 = Int(1);
  Any a4;
  
  return a4;
}

int main (){
  Any a3 = Str("Hello");
  Any a2 = x1x_parse ( a3 );
  Any a1 = a2;
  Any a8 = a1;
  Any a7 = toStr ( a8 );
  println ( a7 );
  return 0;
}
