#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"

int main (){
  Any a2 = Int(112233445566778899);
  Any a1 = a2;
  Any a7 = a1;
  Any a6 = toStr ( a7 );
  println ( a6 );
  Any a9 = Int(1);
  Any a10 = wyce_add( a2 , a9);
  a1 = a10;
  Any a15 = a1;
  Any a14 = toStr ( a15 );
  println ( a14 );
  Any a17 = Int(556);
  Any a18 = wyce_sub( a10 , a17);
  a1 = a18;
  Any a23 = a1;
  Any a22 = toStr ( a23 );
  println ( a22 );
  Any a25 = Int(123);
  Any a26 = wyce_mul( a18 , a25);
  a1 = a26;
  Any a31 = a1;
  Any a30 = toStr ( a31 );
  println ( a30 );
  Any a33 = Int(2);
  Any a40 = Int(0);
  Any a34 = wyce_div( a26 , a33);
  a1 = a34;
  Any a39 = a1;
  Any a38 = toStr ( a39 );
  println ( a38 );
  return 0;
}
