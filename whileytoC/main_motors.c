#define LIBRARY_TESTING false

#include "../cCompiler/mattCompiler.h"
#include "../cCompiler/mattCompiler_library.c"
#include "cCompiler/cf_Lib.c"


int main (){
  Any a1 = Bool(true);
  Any a0 = a1;
  ledInit (  );
  motorsInit (  );
  Any a2 = Int(0);
  motorsTestTask ( a2.i );
  loop_start_label132: ;
  Any a4 = Bool(true);
  if ( dataAsInt( a0 ) == dataAsInt( a4 ) ) { goto label133; };
  goto label132;
  label133: ;
  Any a5 = Bool(true);
  a0 = a5;
  goto loop_start_label132;
  label132: ;
  return 0;
}
