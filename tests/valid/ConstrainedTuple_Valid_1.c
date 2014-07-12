#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef int nat;
typedef tnat;

Any x1x_f ( Any );

Any x1x_f ( Any a0 ){
  Any a3 = Int( ((Any**)a0.ptr)[0]->i);
  Any a4 = Int( ((Any**)a0.ptr)[1]->i);
  Any a7 = wyce_add( a3 , a4);
  Any a10 = Int(0);
  return a7;
}

int main (){
  Any a2 = Int(3);
  Any a3 = Int(5);
  Any a4 = Tuple( a2, a3);
  Any a8 = Str("GOT: ");
  Any a13 = Int( ((Any**)a4.ptr)[0]->i);
  Any a15 = Int(0);
  a13 = Int( ((Any**)a4.ptr)[1]->i);
  a15 = Int(0);
  Any a9 = x1x_f ( a4 );
  a9 = toStr ( a9 );
  Any a11 = Str( strcat ( a8.s , a9.s ) );
  println ( a11 );
  return 0;
}
