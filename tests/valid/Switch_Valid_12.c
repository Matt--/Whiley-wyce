#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
Any x1x_f ( Any[] );

Any x1x_f ( Any a0[] ){
  switch( a0 ){
    case [] : goto label141;
    case [1] : goto label142;
    default : goto label140;
  }
  label141: ;
  Any a2 = Int(0);
  return a2;
  label142: ;
  Any a3 = Int(1);
  Any a4 = wyce_neg(a3);
  return a4;
  label140: ;
  Any a5 = Int(10);
  return a5;
}

int main (){
  Any a6 [10];
  Any a5 = x1x_f ( a6 );
  Any a4 = toStr ( a5 );
  println ( a4 );
  Any a12 = Int(1);
  Any a13[] = {a12};
  Any a11 = x1x_f ( a13 );
  Any a10 = toStr ( a11 );
  println ( a10 );
  Any a19 = Int(3);
  Any a20[] = {a19};
  Any a18 = x1x_f ( a20 );
  Any a17 = toStr ( a18 );
  println ( a17 );
  Any a26 = Int(1);
  Any a27 = Int(2);
  Any a28 = Int(3);
  Any a29[] = {a26, a27, a28};
  Any a25 = x1x_f ( a29 );
  Any a24 = toStr ( a25 );
  println ( a24 );
  return 0;
}
