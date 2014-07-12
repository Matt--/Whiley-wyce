#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef int nat;

Any f ( Any[] , Any[] );

Any f ( Any a0[], Any a1[] ){
  #### appending arrays not yet catered for;
  Any a5 = Int( sizeof( a4 ) / sizeof( a4[0] ) );
  Any a8 = Int(0);
  return a5;
}

int main (){
  Any a2 = Int(1);
  Any a3 = Int(2);
  Any a4 = Int(3);
  Any a5[] = {a2, a3, a4};
  Any a7 = Int(5);
  Any a8 = Int(6);
  Any a9 = Int(7);
  Any a10[] = {a7, a8, a9};
  Any a12 = f ( a5, a10 );
  Any a11 = a12;
  Any a19 = a11;
  Any a18 = toStr ( a19 );
  println ( a18 );
  return 0;
}
