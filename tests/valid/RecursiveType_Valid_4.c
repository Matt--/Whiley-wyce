#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef typedef record XXX ListAccess;
typedef 
Any evaluate ( Any );

Any evaluate ( Any a0 ){
  if(a0.type == REAL_TYPE){ goto label1215; };
  if(a0.type == INT_TYPE){ goto label1216; };
  label1216: ;
  goto label1217;
  label1215: ;
  Any a1 = a0;
  return a1;
  label1217: ;
  if(a0.type == ){ goto label1216; };
  goto label1218;
  Any a2 = ;
  int count = a0[0];
  loop_start_label1219: ;
  if(count == a0[1]){ goto label1219; }
  Any a5 = a0[count];
  count++;
  Any a7 = evaluate ( a5 );
  Any a6 = a7;
  if(a6.type == NULL_TYPE){ goto label1216; };
  goto label1220;
  Any a9 = a6;
  return a9;
  label1220: ;
  Any a12[] = {a6};
