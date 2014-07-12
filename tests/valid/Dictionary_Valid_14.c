#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef 
Any f ( Any );

Any f ( Any a0 ){
  Any a2 = Int(0);
  if ( dataAsInt( a0 ) >= dataAsInt( a2 ) ) { goto label1491; };
  Any a3 = Int(1);
  Any a4 = Int(2);
  Any a5 = Int(2);
  Any a6 = Int(3);
