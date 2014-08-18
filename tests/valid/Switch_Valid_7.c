#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef int nat;

Any x1x_f ( Any  );

Any x1x_f ( Any a0 ){
  switch( a0.i ){
    case 1 : goto label203;
    default : goto label202;
  }
  label203: ;
  Any a4 = Int(1);
  Any a10 = Int(0);
  if ( dataAsInt( a4 ) == dataAsInt( a10 ) ) { goto label204; };
  Any a12 = Int(1);
  label204: ;
  return a4;
  label202: ;
  Any a5 = Int(0);
  a10 = Int(0);
  if ( dataAsInt( a5 ) == dataAsInt( a10 ) ) { goto label205; };
  a12 = Int(1);
  label205: ;
  return a5;
}

int main (){
  Any a6 = Int(2);
  Any a9 = Int(0);
  Any a5 = x1x_f ( a6 );
  Any a4 = toStr ( a5 );
  println ( a4 );
  Any a12 = Int(1);
  Any a15 = Int(0);
  Any a11 = x1x_f ( a12 );
  Any a10 = toStr ( a11 );
  println ( a10 );
  Any a18 = Int(0);
  Any a21 = Int(0);
  Any a17 = x1x_f ( a18 );
  Any a16 = toStr ( a17 );
  println ( a16 );
  return 0;
}
