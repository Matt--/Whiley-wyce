#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef 
Any f ( Any );

Any f ( Any a0 ){
  Any a2 = ;
  int count = a0[0];
  loop_start_label1283: ;
  if(count == a0[1]){ goto label1283; }
  Any a1 = a0[count];
  count++;
  Any a4 = Int(2);
  Any a10 = Int(0);
  Any a5 = div_wyce( a1 , a4);
  Any a6 = Int(2);
  Any a7 = mul( a5 , a6);
  if ( dataAsInt( a7 ) != dataAsInt( a1 ) ) { goto label1284; };
