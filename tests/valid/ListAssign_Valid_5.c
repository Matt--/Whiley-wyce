#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
Any* x1x_move ( Any , Any , Any[] );

Any* x1x_move ( Any a0, Any a1, Any a2[] ){
  Any a46 = Int(0);
  Any a47 = Int( sizeof( a2 ) / sizeof( a2[0] ) );
  Any a30 = a2[a0.i];
  Any a32 = Int(1);
  Any a33 = wyce_add( a0 , a32);
  a46 = Int(0);
  a47 = Int( sizeof( a30 ) / sizeof( a30[0] ) );
  Any a34 = a30[a33.i];
  Any a27 = a34;
  Any a36 = Int(1);
  Any a37 = wyce_add( a0 , a36);
  Any a39 = Null();
  a2[a0.i] = a39;
  Any a41 = Int(1);
  Any a42 = wyce_add( a1 , a41);
  Any a44 = a27;
  a2[a1.i] = a44;
  return a2;
}

int main (){
  Any a2 = Int(1);
  Any a3 = Int(2);
  Any a4 = Int(3);
  Any a5[] = {a2, a3, a4};
  Any a6 = Int(4);
  Any a7 = Int(5);
  Any a8 = Int(6);
  Any a9[] = {a6, a7, a8};
  Any a10 = Int(7);
  Any a11 = Int(8);
  Any a12 = Int(9);
  Any a13[] = {a10, a11, a12};
  Any a14[] = {a5, a9, a13};
  Any *a1 = a14;
  Any a16 = Int(0);
  Any a17 = Int(1);
  Any *a18 = a1;
  Any a23 = Int(0);
  Any a26 = Int( sizeof( a18 ) / sizeof( a18[0] ) );
  Any a28 = Int(1);
  Any a29 = wyce_add( a16 , a28);
  Any a32 = a18[a16.i];
  Any a33 = Int( sizeof( a32 ) / sizeof( a32[0] ) );
  Any a35 = Int(0);
  Any a38 = Int( sizeof( a18 ) / sizeof( a18[0] ) );
  Any a40 = Int(1);
  Any a41 = wyce_add( a17 , a40);
  Any a44 = a18[a17.i];
  Any a45 = Int( sizeof( a44 ) / sizeof( a44[0] ) );
  Any a15 = x1x_move ( a16, a17, a18 );
  a1 = a15;
  a23 = a1;
  Any a22 = toStr ( a23 );
  println ( a22 );
  return 0;
}
