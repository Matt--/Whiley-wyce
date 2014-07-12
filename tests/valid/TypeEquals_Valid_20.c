#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
Any f ( Any );

Any f ( Any a0 ){
  if(a0.type == ){ goto label560; };
  goto label561;
  label560: ;
  Any a1 = Int(1);
  return a1;
  label561: ;
  Any a2 = Int(1);
  Any a3 = neg(a2);
  return a3;
}

int main (){
  Any a2 = Int(1);
  Any a3 = Str("Hello");
  Any a4 = Tuple( a2, a3);
