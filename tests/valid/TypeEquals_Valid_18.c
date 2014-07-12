#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
Any* f ( Any[] );

Any* f ( Any a0[] ){
  if(a0.type == ){ goto label22; };
  goto label23;
  label22: ;
  return a0;
  label23: ;
  Any a2 = Int(1);
  Any a3 = Int(2);
  Any a4 = Int(3);
  Any a5[] = {a2, a3, a4};
  return a5;
}

int main (){
  Any a6 = Int(1);
  Any a7 = Int(2);
  Any a8 = Int(3);
  Any a9 = Int(4);
  Any a10 = Int(5);
  Any a11 = Int(6);
  Any a12 = Int(7);
  Any a13[] = {a6, a7, a8, a9, a10, a11, a12};
  Any *a5 = f ( a13 );
  Any a4 = toStr ( a5 );
  println ( a4 );
  Any a19 [10];
  Any *a18 = f ( a19 );
  Any a17 = toStr ( a18 );
  println ( a17 );
  Any a25 = Int(1);
  Any a26 = Int(2);
  Any a27 = Real(2.01);
  Any a28[] = {a25, a26, a27};
  Any *a24 = f ( a28 );
  Any a23 = toStr ( a24 );
  println ( a23 );
  Any a34 = Real(1.23);
  Any a35 = Int(2);
  Any a36 = Real(2.01);
  Any a37[] = {a34, a35, a36};
  Any *a33 = f ( a37 );
  Any a32 = toStr ( a33 );
  println ( a32 );
  return 0;
}
