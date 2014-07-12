#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"

int main (){
  Any a2 = Int(1);
  Any a3 = Int(2);
  Any a4 = Int(3);
  Any a5[] = {a2, a3, a4};
  Any a7 = Int(0);
  Any a28 = Int(0);
  Any a29 = Int( sizeof( a5 ) / sizeof( a5[0] ) );
  Any a8 = a5[a7.i];
  Any a10 = Int( sizeof( a5 ) / sizeof( a5[0] ) );
  Any a12 = Int(1);
  a28 = Int(0);
  a29 = Int( sizeof( a5 ) / sizeof( a5[0] ) );
  Any a13 = a5[a12.i];
  Any a15 = Int( sizeof( a5 ) / sizeof( a5[0] ) );
  Any a17 = Int(2);
  a28 = Int(0);
  a29 = Int( sizeof( a5 ) / sizeof( a5[0] ) );
  Any a18 = a5[a17.i];
  Any a20 = Int( sizeof( a5 ) / sizeof( a5[0] ) );
  Any a26 = Int(0);
  a28 = Int(0);
  a29 = Int( sizeof( a5 ) / sizeof( a5[0] ) );
  Any a27 = a5[a26.i];
  Any a24 = toStr ( a27 );
  println ( a24 );
  return 0;
}
