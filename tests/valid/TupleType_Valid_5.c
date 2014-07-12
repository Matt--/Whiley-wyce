#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef tuple XXX Pos;

Any conflict ( Any , Any , Any );

Any conflict ( Any a0, Any a1, Any a2 ){
  Any a5 = Int( ((Any**)a0.ptr)[0]->i);
  Any a6 = Int( ((Any**)a0.ptr)[1]->i);
  if ( dataAsInt( a5 ) == dataAsInt( a1 ) ) { goto label67; };
  if ( dataAsInt( a6 ) != dataAsInt( a2 ) ) { goto label68; };
  label67: ;
  Any a11 = Bool(true);
  return a11;
  label68: ;
  Any a16 = sub( a6 , a2);
  Any a13 = abs ( a16 );
  Any a21 = sub( a5 , a1);
  Any a18 = abs ( a21 );
  if ( dataAsInt( a13 ) == dataAsInt( a18 ) ) { goto label69; };
  Any a24 = Bool(false);
  goto label70;
  label69: ;
  a24 = Bool(true);
  label70: ;
  return a24;
}

int main (){
  Any a2 = Int(1);
  Any a3 = Int(2);
  Any a4 = Tuple( a2, a3);
  Any a8 = Int(1);
  Any a9 = Int(2);
  Any a6 = conflict ( a4, a8, a9 );
  Any a5 = a6;
  Any a13 = a5;
  println ( a13 );
  Any a16 = Int(3);
  Any a17 = Int(4);
  Any a14 = conflict ( a4, a16, a17 );
  a5 = a14;
  Any a21 = a5;
  println ( a21 );
  Any a24 = Int(1);
  Any a25 = Int(4);
  Any a22 = conflict ( a4, a24, a25 );
  a5 = a22;
  Any a29 = a5;
  println ( a29 );
  Any a32 = Int(3);
  Any a33 = Int(2);
  Any a30 = conflict ( a4, a32, a33 );
  a5 = a30;
  Any a37 = a5;
  println ( a37 );
  Any a40 = Int(3);
  Any a41 = Int(3);
  Any a38 = conflict ( a4, a40, a41 );
  a5 = a38;
  Any a45 = a5;
  println ( a45 );
  return 0;
}
