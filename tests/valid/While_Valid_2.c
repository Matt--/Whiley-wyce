#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
Any binarySearch ( Any[] , Any );

Any binarySearch ( Any a0[], Any a1 ){
  Any a20 = Int(0);
  Any a19 = a20;
  Any a23 = Int( sizeof( a0 ) / sizeof( a0[0] ) );
  Any a21 = a23;
  Any a24 = Int(0);
  Any a28 = Int( sizeof( a0 ) / sizeof( a0[0] ) );
  Any a30 = Int(0);
  a30, a20};
  int count = 0;
  loop_start_label274: ;
  if(count == arraySize.i ){ goto label274; }
  Any a29 = a32[count];
  count++;
  Any a126 = Int(0);
  Any a127 = Int( sizeof( a0 ) / sizeof( a0[0] ) );
  Any a35 = a0[a29.i];
  if ( dataAsInt( a35 ) == dataAsInt( a1 ) ) { goto label275; };
  goto loop_start_label274;
  label274: ;
  goto label276;
  label275: ;
  Any a37 = Bool(false);
  goto label277;
  label276: ;
  a37 = Bool(true);
  label277: ;
  Any a38 = Bool(true);
  Any a42 = Int( sizeof( a0 ) / sizeof( a0[0] ) );
  a23, a42};
  int count = 0;
  loop_start_label278: ;
  if(count == arraySize.i ){ goto label278; }
  Any a39 = a43[count];
  count++;
  a126 = Int(0);
  a127 = Int( sizeof( a0 ) / sizeof( a0[0] ) );
  Any a46 = a0[a39.i];
  if ( dataAsInt( a46 ) == dataAsInt( a1 ) ) { goto label279; };
  goto loop_start_label278;
  label278: ;
  goto label280;
  label279: ;
  Any a48 = Bool(false);
  goto label281;
  label280: ;
  a48 = Bool(true);
  label281: ;
  Any a49 = Bool(true);
  loop_start_label282: ;
  Any a50 = Int(0);
