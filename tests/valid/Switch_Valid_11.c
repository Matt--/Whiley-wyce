#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
Any x1x_f ( Any  );

Any x1x_f ( Any a0 ){
  switch( a0.i ){
    case 1 : goto label135;
    case 2 : goto label136;
    default : goto label134;
  }
  label135: ;
  Any a2 = Int(0);
  Any a9 = Int(0);
  Any a11 = Int(2);
  return a2;
  label136: ;
  Any a3 = Int(1);
  a9 = Int(0);
  a11 = Int(2);
  return a3;
  label134: ;
  Any a4 = Int(2);
  a9 = Int(0);
  a11 = Int(2);
  return a4;
}

int main (){
  Any a6 = Int(2);
  Any a5 = x1x_f ( a6 );
  Any a4 = toStr ( a5 );
  println ( a4 );
  Any a12 = Int(1);
  Any a11 = x1x_f ( a12 );
  Any a10 = toStr ( a11 );
  println ( a10 );
  Any a18 = Int(0);
  Any a17 = x1x_f ( a18 );
  Any a16 = toStr ( a17 );
  println ( a16 );
  return 0;
}
