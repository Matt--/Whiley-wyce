#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
Any x1x_f ( Any , Any );

Any x1x_f ( Any a0, Any a1 ){
  Any charNowStr = toStr(a1);
  Any a4 = Str( strcat ( a0.s , charNowStr.s ) );
  return a4;
}

int main (){
  Any a5 = Str("Hello Worl");
  Any a6 = Char('d');
  Any a4 = x1x_f ( a5, a6 );
  println ( a4 );
  return 0;
}
