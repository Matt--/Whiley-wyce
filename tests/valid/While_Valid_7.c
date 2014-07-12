#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
Any extract ( Any[] );

Any extract ( Any a0[] ){
  Any a2 = Int(0);
  Any a1 = a2;
  Any a4 = Int(1);
  Any a5[] = {a4};
  Any *a3 = a5;
  Any a7 = Int( sizeof( a5 ) / sizeof( a5[0] ) );
  Any a8 = Int(0);
  Any a10 = Int(0);
  loop_start_label352: ;
  Any a12 = Int( sizeof( a3 ) / sizeof( a3[0] ) );
  Any a13 = Int(0);
