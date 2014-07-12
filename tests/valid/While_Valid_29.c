#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
Any find ( Any[] , Any );

Any find ( Any a0[], Any a1 ){
  Any a3 = Int(0);
  Any a2 = a3;
  Any a4 = Int(0);
  Any a8 = Int( sizeof( a0 ) / sizeof( a0[0] ) );
  loop_start_label247: ;
  Any a9 = Int(0);
