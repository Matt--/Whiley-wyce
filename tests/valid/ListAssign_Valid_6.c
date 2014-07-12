#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"

int main (){
  Any a2 = Int(1);
  Any a3 = Int(2);
  Any a4 = Int(4);
  Any a5[] = {a2, a3, a4};
  Any *a1 = a5;
  Any *a7 = a1;
  Any *a6 = a7;
  Any a8 = Int(2);
  Any a9 = Int(3);
  a6[a8.i] = a9;
  Any a11 = Int(2);
  Any a25 = Int(0);
  Any a26 = Int( sizeof( a6 ) / sizeof( a6[0] ) );
  Any a12 = a6[a11.i];
  Any a14 = Int( sizeof( a5 ) / sizeof( a5[0] ) );
  Any *a19 = a1;
  Any a18 = toStr ( a19 );
  println ( a18 );
  Any *a24 = a6;
  Any a23 = toStr ( a24 );
  println ( a23 );
  return 0;
}
