#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
Any f ( Any );

Any f ( Any a0 ){
  Any a2 = Real(0);
  if ( dataAsInt( a0 ) < dataAsInt( a2 ) ) { goto label1147; };
  Any a3 = Int(1);
  return a3;
  label1147: ;
  Any a4 = Str("error");
