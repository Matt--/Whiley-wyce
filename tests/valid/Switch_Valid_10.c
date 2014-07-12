#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
Any f ( Any );

Any f ( Any a0 ){
  switch( a0.r ){
    case 1.23 : goto label18;
    case 2.01 : goto label19;
    default : goto label17;
  }
  label18: ;
  Any a2 = Int(0);
  return a2;
  label19: ;
  Any a3 = Int(1);
  Any a4 = wyce_neg(a3);
  return a4;
  label17: ;
  Any a5 = Int(10);
  return a5;
}

int main (){
  Any a6 = Real(1.23);
  Any a5 = f ( a6 );
  Any a4 = toStr ( a5 );
  println ( a4 );
  Any a12 = Real(2.01);
  Any a11 = f ( a12 );
  Any a10 = toStr ( a11 );
  println ( a10 );
  Any a18 = Real(3);
  Any a17 = f ( a18 );
  Any a16 = toStr ( a17 );
  println ( a16 );
  Any a24 = Int(1);
  Any a25 = wyce_neg(a24);
  Any a23 = f ( a25 );
  Any a22 = toStr ( a23 );
  println ( a22 );
  return 0;
}
