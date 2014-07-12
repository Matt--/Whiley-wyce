#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
Any x1x_f ( Any );

Any x1x_f ( Any a0 ){
  if(a0.type == ){ goto label6; };
  goto label7;
  label6: ;
  Any a2 = Int( sizeof( a0 ) / sizeof( a0[0] ) );
  a2.type = REAL_TYPE;
  int temp = a2.i;
  a2.r = (double) temp;
  return a2;
  label7: ;
  return a0;
}

int main (){
  Any a6 = Int(1);
  Any a7 = Int(2);
  Any a8 = Int(3);
  Any a9[] = {a6, a7, a8};
  Any a5 = x1x_f ( a9 );
  Any a4 = toStr ( a5 );
  println ( a4 );
  Any a15 = Real(1.0);
  Any a16 = Real(2.0);
  Any a17 = Real(3.0);
  Any a18[] = {a15, a16, a17};
  Any a14 = x1x_f ( a18 );
  Any a13 = toStr ( a14 );
  println ( a13 );
  Any a24 = Int(1);
  Any a23 = x1x_f ( a24 );
  Any a22 = toStr ( a23 );
  println ( a22 );
  Any a30 = Real(1.234);
  Any a29 = x1x_f ( a30 );
  Any a28 = toStr ( a29 );
  println ( a28 );
  return 0;
}
