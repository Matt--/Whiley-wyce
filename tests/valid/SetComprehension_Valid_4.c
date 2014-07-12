#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef 
Any f ( Any );

Any f ( Any a0 ){
  Any a2 = ;
  int count = a0[0];
  loop_start_label1285: ;
  if(count == a0[1]){ goto label1285; }
  Any a1 = a0[count];
  count++;
  Any a3 = a1;
  Any a4 = Real(2);
  Any a10 = Real(0);
  Any a5 = div_wyce( a3 , a4);
  Any a6 = Real(2);
  Any a7 = mul( a5 , a6);
  Any a8 = a1;
  if ( dataAsInt( a7 ) != dataAsInt( a8 ) ) { goto label1286; };
