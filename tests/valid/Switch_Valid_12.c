#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
Any f ( Any[] );

Any f ( Any a0[] ){
  switch( a0 ){
    case [] : goto label24;
    case [1] : goto label25;
    default : goto label23;
  }
  label24: ;
  Any a2 = Int(0);
  return a2;
  label25: ;
  Any a3 = Int(1);
  Any a4 = wyce_neg(a3);
  return a4;
  label23: ;
  Any a5 = Int(10);
  return a5;
}

int main (){
  Any a6 [10];
  Any a5 = f ( a6 );
  Any a4 = toStr ( a5 );
  println ( a4 );
  Any a12 = Int(1);
  Any a13[] = {a12};
  Any a11 = f ( a13 );
  Any a10 = toStr ( a11 );
  println ( a10 );
  Any a19 = Int(3);
  Any a20[] = {a19};
  Any a18 = f ( a20 );
  Any a17 = toStr ( a18 );
  println ( a17 );
  Any a26 = Int(1);
  Any a27 = Int(2);
  Any a28 = Int(3);
  Any a29[] = {a26, a27, a28};
  Any a25 = f ( a29 );
  Any a24 = toStr ( a25 );
  println ( a24 );
  return 0;
}
