#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
Any len ( Any );

Any len ( Any a0 ){
  Any a2 = Int( sizeof( a0 ) / sizeof( a0[0] ) );
  return a2;
}

int main (){
  Any a2 = Int(1);
  Any a3 = Int(2);
  Any a4 = Int(3);
  Any a5[] = {a2, a3, a4};
  Any *a1 = a5;
  Any *a10 = a1;
  Any a9 = len ( a10 );
  println ( a9 );
  Any a12 = Int(1);
  Any a13 = Int(2);
  Any a14 = Int(3);
  Any a15 = Int(4);
  Any a16 = Int(5);
  Any a17 = Int(6);
  Any a18 = Int(7);
  Any a19 = Int(8);
