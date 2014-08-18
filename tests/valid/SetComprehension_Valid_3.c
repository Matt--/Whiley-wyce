#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
Any x1x_f ( Any );

Any x1x_f ( Any a0 ){
  Any a2 = ;
  int count = a0[0];
  loop_start_label621: ;
  if(count == a0[1]){ goto label621; }
  Any a1 = Char( a0[count] );
  count++;
  Any a4 = Int(2);
  Any a10 = Int(0);
  Any a5 = wyce_div( a1 , a4);
  Any a6 = Int(2);
  Any a7 = wyce_mul( a5 , a6);
  if ( dataAsInt( a7 ) != dataAsInt( a1 ) ) { goto label622; };
