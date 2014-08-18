#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
Any x1x_f ( Any  );

Any x1x_f ( Any a0 ){
  switch( a0.i ){
    case 1 : goto label138;
    case 2 : goto label138;
    case 3 : goto label139;
    default : goto label137;
  }
  label138: ;
  Any a2 = Int(1);
  Any a3 = wyce_neg(a2);
  return a3;
  label139: ;
  Any a4 = Int(1);
  return a4;
  label137: ;
  Any a5 = Int(10);
  return a5;
}

int main (){
  Any a6 = Int(1);
  Any a5 = x1x_f ( a6 );
  Any a4 = toStr ( a5 );
  println ( a4 );
  Any a12 = Int(2);
  Any a11 = x1x_f ( a12 );
  Any a10 = toStr ( a11 );
  println ( a10 );
  Any a18 = Int(3);
  Any a17 = x1x_f ( a18 );
  Any a16 = toStr ( a17 );
  println ( a16 );
  Any a24 = Int(1);
  Any a25 = wyce_neg(a24);
  Any a23 = x1x_f ( a25 );
  Any a22 = toStr ( a23 );
  println ( a22 );
  return 0;
}
