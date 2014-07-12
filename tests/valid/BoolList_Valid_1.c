#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"

int main (){
  Any a2 = Bool(true);
  Any a3 = Bool(false);
  Any a4 = Bool(true);
  Any a5[] = {a2, a3, a4};
  Any a1 = a5;
  Any a10 = a1;
  Any a9 = toStr ( a10 );
  println ( a9 );
  Any a13 = Int(0);
  Any a27 = Int(0);
  Any a28 = Int( sizeof( a5 ) / sizeof( a5[0] ) );
  Any a14 = a5[a13.i];
  Any a11 = a14;
  Any a19 = a11;
  Any a18 = toStr ( a19 );
  println ( a18 );
  Any a20 = Int(0);
  Any a21 = Bool(false);
  a1[a20.i] = a21;
  Any a26 = a1;
  Any a25 = toStr ( a26 );
  println ( a25 );
  return 0;
}
