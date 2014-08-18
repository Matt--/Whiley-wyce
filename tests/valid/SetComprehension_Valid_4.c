#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
Any x1x_f ( Any );

Any x1x_f ( Any a0 ){
  Any a2 = ;
  int count = a0[0];
  loop_start_label623: ;
  if(count == a0[1]){ goto label623; }
  Any a1 = Char( a0[count] );
  count++;
  Any a3 = a1;
  Any a4 = Real(2);
  Any a10 = Real(0);
  Any a5 = wyce_div( a3 , a4);
  Any a6 = Real(2);
  Any a7 = wyce_mul( a5 , a6);
  Any a8 = a1;
  if ( dataAsInt( a7 ) != dataAsInt( a8 ) ) { goto label624; };
