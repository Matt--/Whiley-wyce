#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef record XXX SyntaxError;

Any f ( Any );
Any syntaxError ( Any );

Any f ( Any a0 ){
  Any a3 = Int(0);
  if ( dataAsInt( a0 ) <= dataAsInt( a3 ) ) { goto label10; };
  label12: ;
  Any a4 = Str("Hello World");
  Any a1 = null;
  goto label11;
  label10: ;
  Any a7 = Str("problem");
  Any a6 = syntaxError ( a7 );
  a1 = a6;
  label11: ;
  if(a1.type == ){ goto label12; };
  goto label13;
  Any a8 = Str("error");
  return a8;
  label13: ;
