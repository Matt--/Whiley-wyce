#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
Any x1x_get ( Any );

Any x1x_get ( Any a0 ){
  Any a2 = Str("x");
  Any a3 = a0[a2.i];
  return a3;
}

int main (){
  Any a2 = a0.args;
  Any a3 = Int( sizeof( a2 ) / sizeof( a2[0] ) );
  Any a4 = Int(10);
  if ( dataAsInt( a3 ) != dataAsInt( a4 ) ) { goto label226; };
  Any a8 = Str("GOT HERE");
  println ( a8 );
  goto label227;
  label226: ;
  Any a11 = Str("x");
  Any a12 = Int(1);
  Any a13 = Str("y");
  Any a14 = Int(2);
