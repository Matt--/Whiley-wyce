#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef int nat;

Any* inc ( Any[] );

Any* inc ( Any a0[] ){
  Any *a61 = a0;
  Any a2 = Int(0);
  Any a1 = a2;
  Any a4 = Int(0);
  Any a7 = Int( sizeof( a0 ) / sizeof( a0[0] ) );
  Any a9 = Int(0);
  a9, a2};
  int count = 0;
  loop_start_label47: ;
  if(count == a1.i ){ goto label47; }
  Any a8 = a11[count];
  count++;
  Any a62 = Int(0);
  Any a63 = Int( sizeof( a0 ) / sizeof( a0[0] ) );
  Any a14 = a0[a8.i];
  Any a15 = Int(0);
  if ( dataAsInt( a14 ) <= dataAsInt( a15 ) ) { goto label48; };
  goto loop_start_label47;
  label47: ;
  goto label49;
  label48: ;
  Any a16 = Bool(false);
  goto label50;
  label49: ;
  a16 = Bool(true);
  label50: ;
  Any a17 = Bool(true);
  loop_start_label51: ;
  Any a19 = Int(0);
  Any a22 = Int( sizeof( a0 ) / sizeof( a0[0] ) );
  Any a24 = Int(0);
  a24, a1};
  int count = 0;
  loop_start_label52: ;
  if(count == a1.i ){ goto label52; }
  Any a23 = a26[count];
  count++;
  a62 = Int(0);
  a63 = Int( sizeof( a0 ) / sizeof( a0[0] ) );
  Any a29 = a0[a23.i];
  Any a30 = Int(0);
  if ( dataAsInt( a29 ) <= dataAsInt( a30 ) ) { goto label53; };
  goto loop_start_label52;
  label52: ;
  goto label54;
  label53: ;
  Any a31 = Bool(false);
  goto label55;
  label54: ;
  a31 = Bool(true);
  label55: ;
  Any a32 = Bool(true);
  Any a35 = Int( sizeof( a0 ) / sizeof( a0[0] ) );
  if ( dataAsInt( a1 ) >= dataAsInt( a35 ) ) { goto label51; };
  a62 = Int(0);
  a63 = Int( sizeof( a0 ) / sizeof( a0[0] ) );
  Any a39 = a0[a1.i];
  Any a40 = Int(1);
  Any a41 = add( a39 , a40);
