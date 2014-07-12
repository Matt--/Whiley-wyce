#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef int nat;

Any extract ( Any[] );

Any extract ( Any a0[] ){
  Any a2 = Int(0);
  Any a1 = a2;
  Any a3 = ;
  Any a6 = Int(0);
  int count = 0;
  loop_start_label337: ;
  if(count == arraySize.i ){ goto label337; }
  Any a7 = a3[count];
  count++;
  Any a9 = Int(0);
  if ( dataAsInt( a7 ) < dataAsInt( a9 ) ) { goto label338; };
  goto loop_start_label337;
  label337: ;
  goto label339;
  label338: ;
  Any a10 = Bool(false);
  goto label340;
  label339: ;
  a10 = Bool(true);
  label340: ;
  Any a11 = Bool(true);
  loop_start_label341: ;
  Any a13 = Int(0);
  ####### assume ge
  int count = 0;
  loop_start_label342: ;
  if(count == arraySize.i ){ goto label342; }
  Any a14 = a3[count];
  count++;
  Any a16 = Int(0);
  if ( dataAsInt( a14 ) < dataAsInt( a16 ) ) { goto label343; };
  goto loop_start_label342;
  label342: ;
  goto label344;
  label343: ;
  Any a17 = Bool(false);
  goto label345;
  label344: ;
  a17 = Bool(true);
  label345: ;
  Any a18 = Bool(true);
