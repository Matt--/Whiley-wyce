#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef 
Any f ( Any , Any[] );

Any f ( Any a0, Any a1[] ){
  Any a3 = Int(0);
  if ( dataAsInt( a0 ) < dataAsInt( a3 ) ) { goto label41; };
  Any a6 = Int( sizeof( a1 ) / sizeof( a1[0] ) );
  if ( dataAsInt( a0 ) < dataAsInt( a6 ) ) { goto label42; };
  label41: ;
  Any a7 = Int(0);
  label44: ;
  label43: ;
  if(a7.type == INT_TYPE){ goto label43; };
  if(a7.type == ){ goto label44; };
