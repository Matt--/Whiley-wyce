#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
Any f ( Any , Any );

Any f ( Any a0, Any a1 ){
  if ( dataAsInt( a0 ) @TODO dataAsInt( a1 ) ) { goto label1361; };
  goto label1362;
  label1361: ;
  Any a4 = Str("XS IS A SUBSET");
  return a4;
  label1362: ;
  Any a5 = Str("XS IS NOT A SUBSET");
  return a5;
}

int main (){
  Any a5 = Int(1);
  Any a6 = Int(2);
  Any a7 = Int(3);
