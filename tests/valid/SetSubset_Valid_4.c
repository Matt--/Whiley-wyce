#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
Any f ( Any , Any );
Any g ( Any , Any );

Any f ( Any a0, Any a1 ){
  Any a4 = Str("XS IS A SUBSET");
  return a4;
}

Any g ( Any a0, Any a1 ){
  Any a4 = f ( a0, a1 );
  return a4;
}

int main (){
  Any a5 = Int(1);
  Any a6 = Int(2);
