#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
Any x1x_f ( Any );

Any x1x_f ( Any a0 ){
  Any a2 = Bool(true);
  if ( dataAsInt( a0 ) == dataAsInt( a2 ) ) { goto label137; };
  goto label138;
  label137: ;
  Any a3 = Str("TRUE");
  return a3;
  label138: ;
  Any a4 = Str("FALSE");
  return a4;
}

int main (){
  Any a5 = Bool(true);
  Any a4 = x1x_f ( a5 );
  println ( a4 );
  Any a10 = Bool(false);
  Any a9 = x1x_f ( a10 );
  println ( a9 );
  return 0;
}
