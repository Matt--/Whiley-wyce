#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
Any x1x_f ( Any );
Any x1x_g ( Any );

Any x1x_f ( Any a0 ){
  Any a1 = toStr ( a0 );
  return a1;
}

Any x1x_g ( Any a0 ){
  Any a1 = toStr ( a0 );
  return a1;
}

int main (){
  Any a4 = Str("FIRST: ");
  Any a6 = Int(1);
  Any a5 = x1x_f ( a6 );
  Any a7 = Str( strcat ( a4.s , a5.s ) );
  println ( a7 );
  Any a11 = Str("SECOND: ");
  Any a13 = Real(1.2344);
  Any a12 = x1x_g ( a13 );
  Any a14 = Str( strcat ( a11.s , a12.s ) );
  println ( a14 );
  return 0;
}
