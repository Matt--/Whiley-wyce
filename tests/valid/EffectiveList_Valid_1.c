#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef record XXX rec;

Any f ( Any[] );

Any f ( Any a0[] ){
  Any a1 = ;
  int count = a0[0];
  loop_start_label967: ;
  if(count == a0[1]){ goto label967; }
  Any a4 = a0[count];
  count++;
  Any a6 = Int(0);
  if ( dataAsInt( a4 ) >= dataAsInt( a6 ) ) { goto label968; };
  Any a8 = Bool(true);
  Any a9[] = {a8};
