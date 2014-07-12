#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"

int main (){
  Any a2 = Bool(true);
  Any a1 = a2;
  Any a4 = Bool(false);
  Any a3 = a4;
  Any a8 = a1;
  println ( a8 );
  Any a12 = a3;
  println ( a12 );
  Any a16 = Str("AND");
  println ( a16 );
  Any a18 = Bool(true);
  if ( dataAsInt( a2 ) == dataAsInt( a18 ) ) { goto label177; };
  goto label178;
  label177: ;
  Any a20 = Bool(true);
  if ( dataAsInt( a4 ) == dataAsInt( a20 ) ) { goto label179; };
  label178: ;
  Any a21 = Bool(false);
  goto label180;
  label179: ;
  a21 = Bool(true);
  label180: ;
  a1 = a21;
  Any a25 = a1;
  println ( a25 );
  Any a29 = Str("NOT");
  println ( a29 );
  Any a36 = Bool(true);
  if ( dataAsInt( a21 ) == dataAsInt( a36 ) ) { goto label181; };
  Any a34 = Bool(true);
  goto label182;
  label181: ;
  a34 = Bool(false);
  label182: ;
  println ( a34 );
  return 0;
}
