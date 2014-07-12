#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
Any f ( Any , Any );

Any f ( Any a0, Any a1 ){
  if ( dataAsInt( a0 ) @TODO dataAsInt( a1 ) ) { goto label1363; };
  goto label1364;
  label1363: ;
  Any a8 = Str("XS IS A SUBSET");
  return a8;
  label1364: ;
  Any a9 = Str("XS IS NOT A SUBSET");
  return a9;
}

int main (){
  Any a5 = Int(1);
  Any a6 = Int(2);
