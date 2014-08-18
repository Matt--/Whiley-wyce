#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
Any x1x_f ( Any  );

Any x1x_f ( Any a0 ){
  if(a0.type == ){ goto label69; };
  goto label70;
  label69: ;
  Any a1 = Int(1);
  return a1;
  label70: ;
  Any a2 = Int(1);
  Any a3 = wyce_neg(a2);
  return a3;
}

int main (){
  Any a2 = Int(0);
  Any a3 = Str("Hello");
