#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
Any indexOf ( Any[] , Any );

Any indexOf ( Any a0[], Any a1 ){
  Any a31 = a1;
  Any a3 = Int(0);
  Any a2 = a3;
  Any a4 = Int(0);
  Any a8 = Int( sizeof( a0 ) / sizeof( a0[0] ) );
  loop_start_label254: ;
  Any a9 = Int(0);
