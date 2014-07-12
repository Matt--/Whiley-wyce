#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef record XXX Point;
typedef 
Any sum ( Any );

Any sum ( Any a0 ){
  if(a0.type == ){ goto label1102; };
  goto label1103;
  label1102: ;
  Any a2 = Int(0);
  Any a1 = a2;
  int count = a0[0];
  loop_start_label1104: ;
  if(count == a0[1]){ goto label1104; }
  Any a4 = a0[count];
  count++;
  Any a7 = a4;
  Any a6 = sum ( a7 );
  Any a8 = add( a1 , a6);
  a1 = a8;
  goto loop_start_label1104;
  label1104: ;
  return a1;
  label1103: ;
