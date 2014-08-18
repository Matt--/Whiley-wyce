#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef struct {Any lhs; Any rhs; } BinOp;
typedef struct {Any id; } Var;
typedef struct {Any err; } SyntaxError;

Any x1x_build ( Any );
Any x1x_sbuild ( Any );

Any x1x_build ( Any a0 ){
  Any a2 = Int(10);
  if ( dataAsInt( a0 ) <= dataAsInt( a2 ) ) { goto label113; };
  Any a3 = Str("var");
  Var a4 = { a3 };
  return a4;
  label113: ;
  Any a6 = Int(0);
  if ( dataAsInt( a0 ) <= dataAsInt( a6 ) ) { goto label114; };
  Any a7 = a0;
  return a7;
  label114: ;
  Any a10 = Int(10);
  Any a11 = wyce_add( a0 , a10);
  Any a8 = x1x_build ( a11 );
  Any a14 = Int(1);
  Any a15 = wyce_add( a0 , a14);
  Any a12 = x1x_build ( a15 );
  BinOp a16 = { a8, a12 };
  return a16;
}

Any x1x_sbuild ( Any a0 ){
  Any a2 = Int(20);
  if ( dataAsInt( a0 ) <= dataAsInt( a2 ) ) { goto label115; };
  Any a3 = Str("error");
  SyntaxError a4 = { a3 };
  return a4;
  label115: ;
  Any a5 = x1x_build ( a0 );
  return a5;
}

int main (){
  Any a2 = Int(5);
  Any a3 = wyce_neg(a2);
  label117: ;
  Any a1 = a3;
  loop_start_label116: ;
  Any a5 = Int(10);
  if ( dataAsInt( a1 ) >= dataAsInt( a5 ) ) { goto label116; };
  Any a7 = x1x_sbuild ( a1 );
  Any a6 = a7;
  if(a6.type == ){ goto label117; };
  goto label118;
  Any a12 = Str("syntax error: ");
  Any a14 = a6.err;
  Any a15 = Str( strcat ( a12.s , a14.s ) );
  println ( a15 );
  goto label119;
  label118: ;
  Any a20 = a6;
  Any a19 = toStr ( a20 );
  println ( a19 );
  label119: ;
  Any a22 = Int(1);
  Any a23 = wyce_add( a1 , a22);
  a1 = a23;
  goto loop_start_label116;
  label116: ;
  return 0;
}
