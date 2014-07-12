#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
Any f ( Any , Any );
void g ( Any , Any , Any );

Any f ( Any a0, Any a1 ){
  Any a2 = a0;
  if ( dataAsInt( a2 ) != dataAsInt( a1 ) ) { goto label4; };
  Any a4 = Str("EQUAL");
  return a4;
  label4: ;
  Any a5 = Str("NOT EQUAL");
  return a5;
}

void g ( Any a0, Any a1, Any a2 ){
  Any a7 = a1;
  Any a6 = toStr ( a7 );
  println ( a6 );
  Any a12 = a2;
  Any a11 = toStr ( a12 );
  println ( a11 );
  Any a16 = f ( a1, a2 );
  println ( a16 );
}

int main (){
  Any a1 = null;
  Any a2 = Int(1);
  Any a3 = Int(4);
  Any a5 = Real(1.0);
  Any a6 = Real(4.0);
  g ( a1, a4, a7 );
  Any a8 = null;
  Any a9 = Int(1);
  Any a10 = Int(4);
  Any a11 = Int(4);
  Any a13 = Real(1.0);
  Any a14 = Real(4.0);
  g ( a8, a12, a15 );
  Any a16 = null;
  Any a17 = Int(1);
  Any a18 = Int(4);
  Any a20 = Real(1.0);
  Any a21 = Real(4.2);
  g ( a16, a19, a22 );
  Any a23 = null;
  Any a24 = Int(1);
  Any a25 = Int(4);
  Any a27 = Real(1.0);
  Any a28 = Real(4.2);
  g ( a23, a26, a29 );
  Any a30 = null;
  Any a31 = ;
  Any a32 = ;
  g ( a30, a31, a32 );
  return 0;
}
