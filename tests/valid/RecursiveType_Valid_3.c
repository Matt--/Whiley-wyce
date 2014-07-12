#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef typedef record XXX ListAccess;
typedef 
Any evaluate ( Any );

Any evaluate ( Any a0 ){
  if(a0.type == REAL_TYPE){ goto label1209; };
  if(a0.type == INT_TYPE){ goto label1210; };
  label1210: ;
  goto label1211;
  label1209: ;
  Any a1 = a0;
  return a1;
  label1211: ;
  if(a0.type == ){ goto label1210; };
  goto label1212;
  Any a2 = ;
  int count = a0[0];
  loop_start_label1213: ;
  if(count == a0[1]){ goto label1213; }
  Any a5 = a0[count];
  count++;
  Any a7 = evaluate ( a5 );
  Any a9[] = {a7};
