#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef typedef record XXX BinOp;
typedef record XXX Var;
typedef record XXX SyntaxError;
typedef 
Any build ( Any );
Any sbuild ( Any );
Any evaluate ( Any );

Any build ( Any a0 ){
  Any a2 = Int(10);
  if ( dataAsInt( a0 ) <= dataAsInt( a2 ) ) { goto label1199; };
  Any a3 = Str("var");
  return a4;
  label1199: ;
  Any a6 = Int(0);
  if ( dataAsInt( a0 ) <= dataAsInt( a6 ) ) { goto label1200; };
  Any a7 = a0;
  return a7;
  label1200: ;
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
  if ( dataAsInt( a0 ) <= dataAsInt( a2 ) ) { goto label1201; };
  Any a3 = Str("error");
  return a4;
  label1201: ;
  Any a5 = build ( a0 );
  return a5;
}

Any evaluate ( Any a0 ){
  if(a0.type == REAL_TYPE){ goto label1202; };
  goto label1203;
  label1202: ;
  return a0;
  label1203: ;
  if(a0.type == ){ goto label1202; };
  goto label1204;
