#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef typedef record XXX BinOp;
typedef record XXX Var;
typedef record XXX SyntaxError;
typedef 
Any build ( Any );
Any sbuild ( Any );

Any build ( Any a0 ){
  Any a2 = Int(10);
  if ( dataAsInt( a0 ) <= dataAsInt( a2 ) ) { goto label167; };
  Any a3 = Str("var");
  return a4;
  label167: ;
  Any a6 = Int(0);
  if ( dataAsInt( a0 ) <= dataAsInt( a6 ) ) { goto label168; };
  Any a7 = a0;
  return a7;
  label168: ;
  Any a10 = Int(10);
  Any a11 = add( a0 , a10);
  Any a8 = build ( a11 );
  Any a14 = Int(1);
  Any a15 = add( a0 , a14);
  Any a12 = build ( a15 );
  return a16;
}

Any sbuild ( Any a0 ){
  Any a2 = Int(20);
  if ( dataAsInt( a0 ) <= dataAsInt( a2 ) ) { goto label169; };
  Any a3 = Str("error");
  return a4;
  label169: ;
  Any a5 = build ( a0 );
  return a5;
}

int main (){
  Any a2 = Int(5);
  Any a3 = neg(a2);
  label171: ;
  Any a1 = a3;
  loop_start_label170: ;
  Any a5 = Int(10);
  if ( dataAsInt( a1 ) >= dataAsInt( a5 ) ) { goto label170; };
  Any a7 = sbuild ( a1 );
  Any a6 = a7;
  if(a6.type == ){ goto label171; };
  goto label172;
  Any a12 = Str("syntax error: ");
