#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
Any f ( Any , Any , Any );

Any f ( Any a0, Any a1, Any a2 ){
  Any a16 = Int( sizeof( a0 ) / sizeof( a0[0] ) );
  Any a17 = Int(0);
  if ( dataAsInt( a16 ) == dataAsInt( a17 ) ) { goto label155; };
  label155: ;
