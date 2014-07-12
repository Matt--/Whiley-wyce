#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef record XXX Attribute;
typedef record XXX CodeAttr;

Any match ( Any );

Any match ( Any a0 ){
  if(a0.type == ){ goto label1010; };
  goto label1011;
  label1010: ;
  Any a1 = Bool(true);
  return a1;
  label1011: ;
  Any a2 = Bool(false);
  return a2;
}

int main (){
  Any a2 = Str("Hello");
  Any a1 = null;
  Any a7 = Str("MATCHED: ");
  Any a9 = a1;
  Any a8 = match ( a9 );
  a8 = toStr ( a8 );
  Any a10 = Str( strcat ( a7.s , a8.s ) );
  println ( a10 );
  Any a11 = ;
  Any a12 = Int(0);
  Any a13 = Int(0);
  Any a14 = Str("Code");
  a1 = null;
  Any a19 = Str("MATCHED: ");
  Any a21 = a1;
  Any a20 = match ( a21 );
  a20 = toStr ( a20 );
  Any a22 = Str( strcat ( a19.s , a20.s ) );
  println ( a22 );
  return 0;
}
