#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
Any f ( Any );
Any g ( Any , Any );

Any f ( Any a0 ){
  Any a2 = Int(1);
  Any a3 = wyce_add( a0 , a2);
  return a3;
}

Any g ( Any a0, Any a1 ){
  Any a6 = a0;
  Any a5 = toStr ( a6 );
  Any a8 = a1;
  Any a7 = toStr ( a8 );
  Any a9 = Tuple( a5, a7);
  return a9;
}

int main (){
  Any a3 = Int(1);
  Any a5 = Int(1);
  Any a4 = f ( a5 );
  Any a8 = f ( a3 );
  Any a2 = g ( a3, a4 );
  Any a6 = Int( ((Any**)a2.ptr)[0]->i);
  Any a7 = Int( ((Any**)a2.ptr)[1]->i);
  Any a9 = Str("
");
  Any a10 = Str( strcat ( a6.s , a9.s ) );
