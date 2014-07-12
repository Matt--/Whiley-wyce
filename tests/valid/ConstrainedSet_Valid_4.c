#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
Any x1x_g ( Any );
Any x1x_f ( Any );

Any x1x_g ( Any a0 ){
  Any a2 = Int(0);
  if ( dataAsInt( a0 ) <= dataAsInt( a2 ) ) { goto label38; };
  Any a4 = Int(125);
  if ( dataAsInt( a0 ) < dataAsInt( a4 ) ) { goto label39; };
  label38: ;
  Any a5 = Int(1);
  return a5;
  label39: ;
  return a0;
}

Any x1x_f ( Any a0 ){
  Any a1 = x1x_g ( a0 );
  return a3;
}

int main (){
  Any a3 = Int(0);
  Any a2 = x1x_f ( a3 );
  Any a1 = a2;
  Any a8 = a1;
  Any a7 = toStr ( a8 );
  println ( a7 );
  return 0;
}
