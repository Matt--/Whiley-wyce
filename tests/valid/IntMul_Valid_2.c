#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"

int main (){
  Any a2 = Int(8);
  Any a4 = Int(1);
  Any a9 = wyce_sub( a2 , a4);
  Any a10 = wyce_mul( a2 , a9);
  Any a5 = a10;
  Any a14 = Str("8 * 8 - 1 => ");
  Any a15 = a5;
  a15 = toStr ( a15 );
  Any a16 = Str( strcat ( a14.s , a15.s ) );
  println ( a16 );
  Any a19 = wyce_mul( a2 , a2);
  Any a21 = wyce_sub( a19 , a4);
  a5 = a21;
  Any a25 = Str("(8 * 8) - 1 => ");
  Any a26 = a5;
  a26 = toStr ( a26 );
  Any a27 = Str( strcat ( a25.s , a26.s ) );
  println ( a27 );
  Any a31 = wyce_sub( a2 , a4);
  Any a32 = wyce_mul( a2 , a31);
  a5 = a32;
  Any a36 = Str("8 * (8 - 1) => ");
  Any a37 = a5;
  a37 = toStr ( a37 );
  Any a38 = Str( strcat ( a36.s , a37.s ) );
  println ( a38 );
  return 0;
}
