#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef struct {Any name; } Attribute;
typedef struct {Any data; Any maxLocals; Any maxStack; Any name; } CodeAttr;

Any x1x_match ( Attribute );

Any x1x_match ( Attribute a0 ){
  if(a0.type == ){ goto label345; };
  goto label346;
  label345: ;
  Any a1 = Bool(true);
  return a1;
  label346: ;
  Any a2 = Bool(false);
  return a2;
}

int main (){
  Any a2 = Str("Hello");
  {string name} a3 = { a2 };
   a1 = a3;
  Any a7 = Str("MATCHED: ");
   a9 = a1;
  Any a8 = x1x_match ( a9 );
  a8 = toStr ( a8 );
  Any a10 = Str( strcat ( a7.s , a8.s ) );
  println ( a10 );
  Any a11 [10];
  Any a12 = Int(0);
  Any a13 = Int(0);
  Any a14 = Str("Code");
  {[void] data,int maxLocals,int maxStack,string name} a15 = { a11, a12, a13, a14 };
  a1 = a15;
  Any a19 = Str("MATCHED: ");
   a21 = a1;
  Any a20 = x1x_match ( a21 );
  a20 = toStr ( a20 );
  Any a22 = Str( strcat ( a19.s , a20.s ) );
  println ( a22 );
  return 0;
}
