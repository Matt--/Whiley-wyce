#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
Any x1x_pred ( Any );
Any x1x_countOver ( Any , Any );

Any x1x_pred ( Any a0 ){
  Any a3 = ;
  int count = a0[0];
  loop_start_label121: ;
  if(count == a0[1]){ goto label121; }
  Any a2 = Char( a0[count] );
  count++;
  Any a5 = Int(0);
  if ( dataAsInt( a2 ) >= dataAsInt( a5 ) ) { goto label122; };
