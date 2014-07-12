#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
Any* add ( Any[] , Any[] );

Any* add ( Any a0[], Any a1[] ){
  Any *a41 = a0;
  Any a7 = Int(0);
  Any a6 = a7;
  Any a9 = Int(0);
  Any a11 = Int( sizeof( a0 ) / sizeof( a0[0] ) );
  Any a13 = Int( sizeof( a1 ) / sizeof( a1[0] ) );
  loop_start_label38: ;
  Any a15 = Int(0);
  Any a17 = Int( sizeof( a0 ) / sizeof( a0[0] ) );
  Any a19 = Int( sizeof( a1 ) / sizeof( a1[0] ) );
  Any a22 = Int( sizeof( a0 ) / sizeof( a0[0] ) );
  if ( dataAsInt( a6 ) >= dataAsInt( a22 ) ) { goto label38; };
  Any a43 = Int(0);
  Any a44 = Int( sizeof( a0 ) / sizeof( a0[0] ) );
  Any a26 = a0[a6.i];
  a43 = Int(0);
  a44 = Int( sizeof( a1 ) / sizeof( a1[0] ) );
  Any a29 = a1[a6.i];
  Any a30 = add( a26 , a29);
