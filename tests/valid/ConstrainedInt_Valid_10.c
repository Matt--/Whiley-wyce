#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef int nat;

Any x1x_f ( Any );
Any x1x_g ( Any , Any );

Any x1x_f ( Any a0 ){
  Any a2 = a0;
  Any a1 = a2;
  Any a4 = a1;
  Any a3 = toStr ( a4 );
  return a3;
}

Any x1x_g ( Any a0, Any a1 ){
  Any a16 = ;
  Any a12 = x1x_f ( a1 );
  return a12;
}

int main (){
  Any a5 = Int(1);
  Any a6 = Int(3);
  Any a11 = Int(0);
  Any a10 = Int(1);
  if ( dataAsInt( a5 ) == dataAsInt( a10 ) ) { goto label240; };
  Any a12 = Int(2);
  label240: ;
  Any a14 = Int(1);
  Any a15 = Int(2);
  Any a16 = Int(3);
  Any a4 = x1x_g ( a5, a6 );
  println ( a4 );
  return 0;
}
