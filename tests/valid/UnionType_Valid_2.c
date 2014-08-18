#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef struct {Any input; Any pos; } State;
typedef struct {Any err; } SyntaxError;

Any x1x_parseTerm ( State );
Any x1x_parseNumber ( State );

Any x1x_parseTerm ( State a0 ){
  Any a2 = a0.pos;
  Any a4 = a0.input;
  Any a5 = Int( strlen( a4.s) );
  if ( dataAsInt( a2 ) >= dataAsInt( a5 ) ) { goto label640; };
  Any a8 = a0.input;
  Any a10 = a0.pos;
  Any a20 = Int(0);
  Any a21 = Int( strlen( a8.s) );
  Any a11 = Char( a8.s[ a10.i ] );
  Any a6 = x1x_isDigit ( a11 );
  Any a12 = Bool(true);
  if ( dataAsInt( a6 ) == dataAsInt( a12 ) ) { goto label641; };
  goto label640;
  label641: ;
  Any a18 = a0.pos;
  a20 = Int(0);
  Any a13 = x1x_parseNumber ( a0 );
  Any a15 = Int( ((Any**)a13.ptr)[1]->i);
  Any a17 = a15.pos;
  Any a19 = Int(0);
  return a13;
  label640: ;
  a15 = Str("unknown expression encountered");
  SyntaxError a16 = { a15 };
  a18 = Tuple( a16, a0);
  a20 = Int( ((Any**)a18.ptr)[1]->i);
  Any a22 = a20.pos;
  Any a24 = Int(0);
  return a18;
}

Any x1x_parseNumber ( State a0 ){
  Any a2 = Int(0);
  Any a1 = a2;
  Any a4 = a0.pos;
  Any a5 = Int(0);
  loop_start_label642: ;
  Any a7 = a0.pos;
  Any a8 = Int(0);
  Any a10 = a0.pos;
  Any a12 = a0.input;
  Any a13 = Int( strlen( a12.s) );
  if ( dataAsInt( a10 ) >= dataAsInt( a13 ) ) { goto label642; };
  Any a16 = a0.input;
  Any a18 = a0.pos;
  Any a41 = Int(0);
  Any a42 = Int( strlen( a16.s) );
  Any a19 = Char( a16.s[ a18.i ] );
  Any a14 = x1x_isDigit ( a19 );
  Any a20 = Bool(true);
  if ( dataAsInt( a14 ) == dataAsInt( a20 ) ) { goto label643; };
  goto label642;
  label643: ;
  Any a23 = a0.input;
  Any a25 = a0.pos;
  a41 = Int(0);
  a42 = Int( strlen( a23.s) );
  Any a26 = Char( a23.s[ a25.i ] );
  a26.type = INT_TYPE;
  Any a9999 = Char(a26.c);
  a26.i = (int) a9999.c;
  Any a27 = wyce_add( a1 , a26);
  Any a28 = Char('0');
  a28.type = INT_TYPE;
  a9999 = Char(a28.c);
  a28.i = (int) a9999.c;
  Any a29 = wyce_sub( a27 , a28);
  a1 = a29;
  Any a31 = a0.pos;
  Any a32 = Int(1);
  Any a33 = wyce_add( a31 , a32);
  a0.pos = a33;
  Any a35 = a0.pos;
  Any a36 = Int(0);
  goto loop_start_label642;
  label642: ;
  Any a39 = Tuple( a1, a0);
  a41 = Int( ((Any**)a39.ptr)[1]->i);
  Any a43 = a41.pos;
  Any a45 = Int(0);
  return a39;
}

int main (){
  Any a3 = Str("123");
  Any a4 = Int(0);
  label644: ;
  State a5 = { a3, a4 };
  Any a9 = a5.pos;
  Any a11 = Int(0);
  Any a2 = x1x_parseTerm ( a5 );
  Any a6 = Int( ((Any**)a2.ptr)[0]->i);
  Any a12 = a6;
  a11 = toStr ( a12 );
  println ( a11 );
  Any a14 = Str("abc");
  Any a15 = Int(0);
  State a16 = { a14, a15 };
  Any a20 = a16.pos;
  Any a22 = Int(0);
  Any a13 = x1x_parseTerm ( a16 );
  a6 = Int( ((Any**)a13.ptr)[0]->i);
  if(a6.type == ){ goto label644; };
  goto label645;
  Any a21 = a6.err;
  println ( a21 );
  goto label646;
  label645: ;
  Any a26 = a6;
  Any a25 = toStr ( a26 );
  println ( a25 );
  label646: ;
  return 0;
}
