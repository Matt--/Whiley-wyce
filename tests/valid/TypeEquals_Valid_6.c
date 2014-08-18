#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef struct {Any msg; } SyntaxError;

Any x1x_f ( Any );
SyntaxError x1x_syntaxError ( Any );

Any x1x_f ( Any a0 ){
  Any a3 = Int(0);
  if ( dataAsInt( a0 ) <= dataAsInt( a3 ) ) { goto label10; };
  label12: ;
  Any a4 = Str("Hello World");
  Any a1 = Null();
  goto label11;
  label10: ;
  Any a7 = Str("problem");
  SyntaxError a6 = x1x_syntaxError ( a7 );
  a1 = a6;
  label11: ;
  if(a1.type == ){ goto label12; };
  goto label13;
  Any a8 = Str("error");
  return a8;
  label13: ;
  Any a10 = a1.input;
  return a10;
}

SyntaxError x1x_syntaxError ( Any a0 ){
  SyntaxError a2 = { a0 };
  return a2;
}

int main (){
  Any a5 = Int(0);
  Any a4 = x1x_f ( a5 );
  println ( a4 );
  Any a10 = Int(1);
  Any a9 = x1x_f ( a10 );
  println ( a9 );
  return 0;
}
