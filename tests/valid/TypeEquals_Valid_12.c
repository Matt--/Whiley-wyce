#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef struct {Any x; Any y; } bop;

Any x1x_f ( Any );

Any x1x_f ( Any a0 ){
  if(a0.type == INT_TYPE){ goto label73; };
  goto label74;
  label73: ;
  Any a1 = Str("GOT INT");
  return a1;
  label74: ;
  Any a2 = Str("GOT BOB");
  return a2;
}

int main (){
  Any a2 = Int(1);
  Any a1 = a2;
  Any a7 = a1;
  Any a6 = x1x_f ( a7 );
  println ( a6 );
  Any a8 = Int(1);
  Any a9 = Int(2);
  bop a10 = { a8, a9 };
  a1 = a10;
  bop a15 = a1;
  Any a14 = x1x_f ( a15 );
  println ( a14 );
  return 0;
}
