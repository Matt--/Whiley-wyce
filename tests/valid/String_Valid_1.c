#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef int nat;

Any f ( Any , Any );

Any f ( Any a0, Any a1 ){
  Any a4 = Int( strlen( a1.s) );
  if ( dataAsInt( a0 ) < dataAsInt( a4 ) ) { goto label25; };
  Any a6 = Str("Missing flag");
  Any a5 = SyntaxError ( a6, a0, a0 );
