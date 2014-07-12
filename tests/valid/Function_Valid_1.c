#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
Any x1x_f ( Any );
Any x1x_f ( Any );

Any x1x_f ( Any a0 ){
  Any a1 = Str("GOT REAL");
  return a1;
}

Any x1x_f ( Any a0 ){
  Any a1 = Str("GOT INT");
  return a1;
}

int main (){
  Any a5 = Int(1);
  Any a4 = x1x_f ( a5 );
  println ( a4 );
  Any a10 = Real(1.23);
  Any a9 = x1x_f ( a10 );
  println ( a9 );
  return 0;
}
