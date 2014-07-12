#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
Any f ( Any );
Any g ( Any , Any );

Any f ( Any a0 ){
  Any a2 = Int(1);
  Any a3 = wyce_add( a0 , a2);
  return a3;
}

Any g ( Any a0, Any a1 ){
  Any a4 = wyce_add( a0 , a1);
  return a4;
}

int main (){
  Any a2 = Int(2);
  Any a1 = a2;
  Any a4 = Int(1);
