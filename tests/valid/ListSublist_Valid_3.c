#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef int nat;

Any* tail ( Any[] );

Any* tail ( Any a0[] ){
  Any a16 = Int(1);
  Any a18 = Int( sizeof( a0 ) / sizeof( a0[0] ) );
