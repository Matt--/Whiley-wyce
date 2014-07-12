#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
Any f ( Any );

Any f ( Any a0 ){
  if(a0.type == INT_TYPE){ goto label2; };
  goto label3;
  label2: ;
  Any a1 = Str("GOT INT");
  return a1;
  label3: ;
  Any a2 = Str("GOT BOB");
  return a2;
}

int main (){
  Any a2 = Int(1);
  Any a1 = a2;
  label5: ;
  Any a7 = a1;
  label4: ;
  if(a7.type == INT_TYPE){ goto label4; };
  if(a7.type == ){ goto label5; };
