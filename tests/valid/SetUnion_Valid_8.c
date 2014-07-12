#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
Any f ( Any );
Any g ( Any );

Any f ( Any a0 ){
  Any a2 = Int( sizeof( a0 ) / sizeof( a0[0] ) );
  Any a3 = Int(0);
  if ( dataAsInt( a2 ) <= dataAsInt( a3 ) ) { goto label28; };
  Any a5 = a0;
  Any a4 = toStr ( a5 );
  return a4;
  label28: ;
  Any a6 = Str("FAILED");
  return a6;
}

Any g ( Any a0 ){
  Any a3 = Int(1);
