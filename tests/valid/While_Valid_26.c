#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef int nat;

Any search ( Any[] , Any );

Any search ( Any a0[], Any a1 ){
  Any a20 = Int(0);
  Any a19 = a20;
  label180: ;
  Any a22 = Int(0);
  Any a24 = Int(0);
  a24, a20};
  int count = 0;
  loop_start_label170: ;
  if(count == arraySize.i ){ goto label170; }
  Any a23 = a26[count];
  count++;
  Any a71 = Int(0);
  Any a72 = Int( sizeof( a0 ) / sizeof( a0[0] ) );
  Any a29 = a0[a23.i];
  if ( dataAsInt( a29 ) == dataAsInt( a1 ) ) { goto label171; };
  goto loop_start_label170;
  label170: ;
  goto label172;
  label171: ;
  Any a31 = Bool(false);
  goto label173;
  label172: ;
  a31 = Bool(true);
  label173: ;
  Any a32 = Bool(true);
  loop_start_label174: ;
  Any a34 = Int(0);
  ####### assume ge
  Any a36 = Int(0);
  a36, a19};
  int count = 0;
  loop_start_label175: ;
  if(count == arraySize.i ){ goto label175; }
  Any a35 = a38[count];
  count++;
  a71 = Int(0);
  a72 = Int( sizeof( a0 ) / sizeof( a0[0] ) );
  Any a41 = a0[a35.i];
  if ( dataAsInt( a41 ) == dataAsInt( a1 ) ) { goto label176; };
  goto loop_start_label175;
  label175: ;
  goto label177;
  label176: ;
  Any a43 = Bool(false);
  goto label178;
  label177: ;
  a43 = Bool(true);
  label178: ;
  Any a44 = Bool(true);
