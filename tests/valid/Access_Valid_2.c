#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
Any index ( Any , Any );

Any index ( Any a0, Any a1 ){
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
  Any a9 = index ( a10, a11 );
  println ( a9 );
  Any *a16 = a1;
  Any a17 = Int(2);
  Any a15 = index ( a16, a17 );
  println ( a15 );
  Any a19 = Str("Hello World");
  Any a18 = a19;
  Any a24 = a18;
  Any a25 = Int(0);
  Any a23 = index ( a24, a25 );
  println ( a23 );
  Any a30 = a18;
  Any a31 = Int(2);
  Any a29 = index ( a30, a31 );
  println ( a29 );
  return 0;
}
