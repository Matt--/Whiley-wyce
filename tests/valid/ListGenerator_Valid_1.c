#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
Any f ( Any[] );

Any f ( Any a0[] ){
  Any a6 = Int( sizeof( a0 ) / sizeof( a0[0] ) );
  Any a4 = a6;
  Any a8 = a4;
  Any a7 = toStr ( a8 );
  Any a9 = Str("
");
  Any a10 = Str( strcat ( a7.s , a9.s ) );
