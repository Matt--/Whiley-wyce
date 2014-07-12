#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef record XXX Reader;

Any f ( Any );
Any m ( Any , Any );

Any f ( Any a0 ){
  Any a1 = Int(1);
  return a1;
}

Any m ( Any a0, Any a1 ){
