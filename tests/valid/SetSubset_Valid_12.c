#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
Any f ( Any , Any );
Any g ( Any , Any );

Any f ( Any a0, Any a1 ){
  if ( dataAsInt( a0 ) @TODO dataAsInt( a1 ) ) { goto label917; };
  goto label918;
  label917: ;
  Any a4 = Str("XS IS A SUBSET");
  return a4;
  label918: ;
  Any a5 = Str("FAILED");
  return a5;
}

Any g ( Any a0, Any a1 ){
  Any a2 = f ( a0, a1 );
  return a2;
}

int main (){
  Any a5 = Int(1);
  Any a6 = Int(2);
  Any a7 = Int(3);
