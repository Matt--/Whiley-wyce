#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
Any x1x_toString ( Any );

Any x1x_toString ( Any a0 ){
  if(a0.type == ){ goto label110; };
  goto label111;
  label110: ;
  if(a0.type == REAL_TYPE){ goto label110; };
  goto label112;
  Any a2 = a0;
  Any a1 = toStr ( a2 );
  return a1;
  label112: ;
  Any a5 = a0.data;
  Any a3 = toStr ( a5 );
  Any a6 = Str("->");
  Any a7 = Str( strcat ( a3.s , a6.s ) );
  Any a10 = a0.lhs;
  Any a8 = x1x_toString ( a10 );
  Any a11 = Str( strcat ( a7.s , a8.s ) );
  return a11;
  label111: ;
  Any a13 = Int(1);
  Any a14 = wyce_neg(a13);
  Any a12 = toStr ( a14 );
  return a12;
}

int main (){
  Any a2 = Real(0.1234);
  Any a1 = a2;
  Any a4 = Int(1);
  Any a3 = Null();
  Any a8 = Int(45);
  Any a7 = Null();
  Any a13[] = {a2};
  Any *a11 = a13;
  Any *a15 = a11;
  Any a16 = a1;
  Any a17 = a3;
  Any a18[] = {a15, a16, a17};
  Any *a14 = a18;
  Any a23 = a1;
  Any a22 = x1x_toString ( a23 );
  println ( a22 );
  Any a28 = a3;
  Any a27 = x1x_toString ( a28 );
  println ( a27 );
  Any a33 = a7;
  Any a32 = x1x_toString ( a33 );
  println ( a32 );
  Any *a38 = a11;
  Any a37 = x1x_toString ( a38 );
  println ( a37 );
  Any *a43 = a14;
  Any a42 = x1x_toString ( a43 );
  println ( a42 );
  return 0;
}
