#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
Any max ( Any[] );

Any max ( Any a0[] ){
  Any a6 = Int(0);
  Any a59 = Int(0);
  Any a60 = Int( sizeof( a0 ) / sizeof( a0[0] ) );
  Any a7 = a0[a6.i];
  Any a4 = a7;
  Any a9 = Int(0);
  Any a8 = a9;
  Any a13 = Int(0);
  a13, a9};
  int count = 0;
  loop_start_label120: ;
  if(count == a1.i ){ goto label120; }
  Any a12 = a15[count];
  count++;
  a59 = Int(0);
  a60 = Int( sizeof( a0 ) / sizeof( a0[0] ) );
  Any a18 = a0[a12.i];
  if ( dataAsInt( a18 ) > dataAsInt( a7 ) ) { goto label121; };
  goto loop_start_label120;
  label120: ;
  goto label122;
  label121: ;
  Any a20 = Bool(false);
  goto label123;
  label122: ;
  a20 = Bool(true);
  label123: ;
  Any a21 = Bool(true);
  loop_start_label124: ;
