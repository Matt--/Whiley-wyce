#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef struct {Any lhs; Any rhs; } BinOp;
typedef struct {Any id; } Var;
typedef struct {Any err; } SyntaxError;

Any x1x_build ( Any );
Any x1x_sbuild ( Any );
Any x1x_evaluate ( Any );

Any x1x_build ( Any a0 ){
  Any a2 = Int(10);
  if ( dataAsInt( a0 ) <= dataAsInt( a2 ) ) { goto label541; };
  Any a3 = Str("var");
  Var a4 = { a3 };
  return a4;
  label541: ;
  Any a6 = Int(0);
  if ( dataAsInt( a0 ) <= dataAsInt( a6 ) ) { goto label542; };
  Any a7 = a0;
  return a7;
  label542: ;
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
  if ( dataAsInt( a0 ) <= dataAsInt( a2 ) ) { goto label543; };
  Any a3 = Str("error");
  SyntaxError a4 = { a3 };
  return a4;
  label543: ;
  Any a5 = x1x_build ( a0 );
  return a5;
}

Any x1x_evaluate ( Any a0 ){
  if(a0.type == REAL_TYPE){ goto label544; };
  goto label545;
  label544: ;
  return a0;
  label545: ;
  if(a0.type == ){ goto label544; };
  goto label546;
  Any a3 = a0.id;
  Any a4 = Int( strlen( a3.s) );
  a4.type = REAL_TYPE;
  Any a9999 = Int(a4.i);
  a4.r = (double) a9999.i;
  return a4;
  label546: ;
  Any a7 = a0.lhs;
  Any a5 = x1x_evaluate ( a7 );
  Any a10 = a0.rhs;
  Any a8 = x1x_evaluate ( a10 );
  Any a11 = wyce_add( a5 , a8);
  return a11;
}

int main (){
  Any a2 = Int(5);
  Any a3 = wyce_neg(a2);
  label548: ;
  Any a1 = a3;
  loop_start_label547: ;
  Any a5 = Int(10);
  if ( dataAsInt( a1 ) >= dataAsInt( a5 ) ) { goto label547; };
  Any a7 = x1x_sbuild ( a1 );
  Any a6 = a7;
  if(a6.type == ){ goto label548; };
  goto label549;
  Any a12 = Str("syntax error: ");
  Any a14 = a6.err;
  Any a15 = Str( strcat ( a12.s , a14.s ) );
  println ( a15 );
  goto label550;
  label549: ;
  Any a16 = x1x_evaluate ( a6 );
  a6 = a16;
  Any a22 = a6;
  Any a21 = toStr ( a22 );
  println ( a21 );
  label550: ;
  Any a24 = Int(1);
  Any a25 = wyce_add( a1 , a24);
  a1 = a25;
  goto loop_start_label547;
  label547: ;
  return 0;
}
