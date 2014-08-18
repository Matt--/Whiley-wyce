#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
Any x1x_len ( Any );

Any x1x_len ( Any a0 ){
  Any a2 = Int( sizeof( a0 ) / sizeof( a0[0] ) );
  return a2;
}

int main (){
  Any a2 = Int(1);
  Any a3 = Int(2);
  Any a4 = Int(3);
  Any a1 = @ignore;
  Any a10 = a1;
  Any a9 = x1x_len ( a10 );
  println ( a9 );
  Any a12 = Int(1);
  Any a13 = Int(2);
  Any a14[] = {a12, a13};
  Any *a11 = a14;
  Any *a19 = a11;
  Any a18 = x1x_len ( a19 );
  println ( a18 );
  Any a21 = Int(1);
  Any a22 = Int(2);
  Any a23 = Int(3);
  Any a24 = Int(4);
  Any a25 = Int(5);
  Any a26 = Int(6);
  Any a27 = Int(7);
  Any a28 = Int(8);
