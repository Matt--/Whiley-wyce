#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef 
Any f ( Any );

Any f ( Any a0 ){
  if(a0.type == ){ goto label546; };
  goto label547;
  label546: ;
  Any a1 = Str("{int}");
  return a1;
  label547: ;
  Any a2 = Str("int");
  return a2;
}

int main (){
  Any a5 = Int(1);
  Any a6 = Int(2);
  Any a7 = Int(3);
