#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
Any x1x_index ( Any , Any );

Any x1x_index ( Any a0, Any a1 ){
  Any a4 = a0[a1.i];
  return a4;
}

int main (){
  Any a2 = Int(1);
  Any a3 = Int(2);
  Any a4 = Int(3);
  Any a5[] = {a2, a3, a4};
  Any *a1 = a5;
  Any *a10 = a1;
  Any a11 = Int(1);
  Any a9 = x1x_index ( a10, a11 );
  println ( a9 );
  Any *a16 = a1;
  Any a17 = Int(2);
  Any a15 = x1x_index ( a16, a17 );
  println ( a15 );
  Any a19 = Int(1);
  Any a20 = Str("hello");
  Any a21 = Int(2);
  Any a22 = Str("cruel");
  Any a23 = Int(3);
  Any a24 = Str("world");
