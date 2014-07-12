#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
void f ( Any , Any[] );

void f ( Any a0, Any a1[] ){
  Any a4 = Int( sizeof( a1 ) / sizeof( a1[0] ) );
  Any a2 = a4;
  Any a9 = a2;
  Any a8 = toStr ( a9 );
  println ( a8 );
  Any a16 = Int(1);
  Any a17 = wyce_sub( a4 , a16);
  Any a19 = Int(0);
  Any a20 = Int( sizeof( a1 ) / sizeof( a1[0] ) );
  Any a18 = a1[a17.i];
  Any a13 = toStr ( a18 );
  println ( a13 );
}

int main (){
  Any a2 = Int(1);
  Any a3 = Int(2);
  Any a4 = Int(3);
  Any a5[] = {a2, a3, a4};
  Any *a1 = a5;
  Any a6 = null;
  Any *a7 = a1;
  f ( a6, a7 );
  return 0;
}
