#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef int fr6nat;

Any g ( Any );
Any f ( Any );

Any g ( Any a0 ){
  Any a2 = ;
  int count = a0[0];
  loop_start_label1269: ;
  if(count == a0[1]){ goto label1269; }
  Any a1 = a0[count];
  count++;
  Any a4 = Int(1);
  if ( dataAsInt( a1 ) <= dataAsInt( a4 ) ) { goto label1270; };
