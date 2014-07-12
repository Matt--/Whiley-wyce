#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
Any x1x_f ( Any );

Any x1x_f ( Any a0 ){
  if(a0.type == NULL_TYPE){ goto label0; };
  goto label1;
  label0: ;
  Any a1 = Str("GOT NULL");
  return a1;
  label1: ;
  Any a2 = Str("GOT INT");
  return a2;
}

int main (){
  Any a2 = Null();
  Any a1 = a2;
  Any a7 = a1;
  Any a6 = x1x_f ( a7 );
  println ( a6 );
  Any a12 = Int(1);
  Any a11 = x1x_f ( a12 );
  println ( a11 );
  return 0;
}
