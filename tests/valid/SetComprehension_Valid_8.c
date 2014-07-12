#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
Any f ( Any[] );

Any f ( Any a0[] ){
  Any a2 = ;
  int count = a0[0];
  loop_start_label58: ;
  if(count == a0[1]){ goto label58; }
  Any a1 = Char( a0[count] );
  count++;
  Any a4 = Int(1);
  if ( dataAsInt( a1 ) <= dataAsInt( a4 ) ) { goto label59; };
