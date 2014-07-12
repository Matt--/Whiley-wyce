#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef int fr5nat;

Any g ( Any );
Any f ( Any );

Any g ( Any a0 ){
  Any a2 = ;
  int count = a0[0];
  loop_start_label108: ;
  if(count == a0[1]){ goto label108; }
  Any a1 = Char( a0[count] );
  count++;
  Any a4 = Int(1);
  if ( dataAsInt( a1 ) <= dataAsInt( a4 ) ) { goto label109; };
