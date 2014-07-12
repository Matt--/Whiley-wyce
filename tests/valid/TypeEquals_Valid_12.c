#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef record XXX bop;
typedef 
Any f ( Any );

Any f ( Any a0 ){
  if(a0.type == INT_TYPE){ goto label544; };
  goto label545;
  label544: ;
  Any a1 = Str("GOT INT");
  return a1;
  label545: ;
  Any a2 = Str("GOT BOB");
  return a2;
}

int main (){
  Any a2 = Int(1);
  Any a1 = a2;
  Any a7 = a1;
  Any a6 = f ( a7 );
  println ( a6 );
  Any a8 = Int(1);
  Any a9 = Int(2);
  a1 = null;
  Any a15 = a1;
  Any a14 = f ( a15 );
  println ( a14 );
  return 0;
}
