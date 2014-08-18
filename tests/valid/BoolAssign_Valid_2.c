#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"

int main (){
  Any a2 = Bool(true);
  Any a4 = Bool(false);
  println ( a2 );
  println ( a4 );
  Any a16 = Str("AND");
  println ( a16 );
  Any a18 = Bool(true);
  if ( dataAsInt( a2 ) == dataAsInt( a18 ) ) { goto label152; };
  goto label153;
  label152: ;
  Any a20 = Bool(true);
  if ( dataAsInt( a4 ) == dataAsInt( a20 ) ) { goto label154; };
  label153: ;
  Any a21 = Bool(false);
  goto label155;
  label154: ;
  a21 = Bool(true);
  label155: ;
  a2 = a21;
  println ( a2 );
  Any a29 = Str("NOT");
  println ( a29 );
  Any a36 = Bool(true);
  if ( dataAsInt( a21 ) == dataAsInt( a36 ) ) { goto label156; };
  Any a34 = Bool(true);
  goto label157;
  label156: ;
  a34 = Bool(false);
  label157: ;
  println ( a34 );
  return 0;
}
