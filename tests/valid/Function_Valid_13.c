#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef Point;

Any f ( Any );
Any Point ( Any , Any );

Any f ( Any a0 ){
  return a0;
}

Any Point ( Any a0, Any a1 ){
  Any a2 = f ( a0 );
  Any a4 = f ( a1 );
  if ( dataAsInt( a2 ) == dataAsInt( a4 ) ) { goto label5; };
