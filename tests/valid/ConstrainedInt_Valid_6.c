#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
Any f ( Any );
Any g ( Any , Any );

Any f ( Any a0 ){
  Any a2 = a0;
  Any a1 = a2;
  Any a4 = a1;
  Any a3 = toStr ( a4 );
  return a3;
}

Any g ( Any a0, Any a1 ){
  Any a16 = ;
  Any a12 = f ( a1 );
  return a12;
}

int main (){
  Any a5 = Int(1);
  Any a6 = Int(2);
  Any a10 = Int(1);
  if ( dataAsInt( a5 ) == dataAsInt( a10 ) ) { goto label247; };
  Any a12 = Int(2);
  label247: ;
  Any a14 = Int(1);
  Any a15 = Int(2);
  Any a16 = Int(3);
  Any a4 = g ( a5, a6 );
  println ( a4 );
  return 0;
}
