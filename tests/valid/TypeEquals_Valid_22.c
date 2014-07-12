#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
Any f ( Any );

Any f ( Any a0 ){
  if(a0.type == ){ goto label564; };
  goto label565;
  label564: ;
  Any a1 = Int(1);
  return a1;
  label565: ;
  Any a2 = Int(1);
  Any a3 = neg(a2);
  return a3;
}

int main (){
  Any a2 = Int(0);
  Any a3 = Str("Hello");
