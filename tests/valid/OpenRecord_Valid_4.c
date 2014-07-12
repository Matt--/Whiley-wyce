#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef record XXX OpenRecord;

Any getField ( Any );

Any getField ( Any a0 ){
  if(a0.type == ){ goto label1096; };
  goto label1097;
  label1096: ;
  Any a1 = Str("(1 field): ");
