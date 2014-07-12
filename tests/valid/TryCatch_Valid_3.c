#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
Any f ( Any );
Any g ( Any , Any );

Any f ( Any a0 ){
  Any a2 = Int(0);
  if ( dataAsInt( a0 ) <= dataAsInt( a2 ) ) { goto label1156; };
  Any a3 = Int(1);
  return a3;
  label1156: ;
  Any a5 = Int(1);
  Any a6 = neg(a5);
  if ( dataAsInt( a0 ) != dataAsInt( a6 ) ) { goto label1157; };
  Any a7 = Str("error");
