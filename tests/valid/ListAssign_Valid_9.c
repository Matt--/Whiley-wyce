#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
Any* x1x_f ( );

Any* x1x_f (){
  Any a0 = Int(1);
  Any a1 = Int(2);
  Any a2[] = {a0, a1};
  Any a5 = Int( sizeof( a2 ) / sizeof( a2[0] ) );
  Any a6 = Int(1);
  return a2;
}

int main (){
  Any *a2 = x1x_f (  );
  Any *a4 = x1x_f (  );
  Any *a3 = a4;
  Any a5 = Int(0);
  Any a6 = Int(0);
  a3[a5.i] = a6;
  Any a12 = Int(0);
  Any a35 = Int(0);
  Any a36 = Int( sizeof( a2 ) / sizeof( a2[0] ) );
  Any a13 = a2[a12.i];
  Any a10 = toStr ( a13 );
  println ( a10 );
  Any a19 = Int(1);
  a35 = Int(0);
  a36 = Int( sizeof( a2 ) / sizeof( a2[0] ) );
  Any a20 = a2[a19.i];
  Any a17 = toStr ( a20 );
  println ( a17 );
  Any a26 = Int(0);
  a35 = Int(0);
  a36 = Int( sizeof( a3 ) / sizeof( a3[0] ) );
  Any a27 = a3[a26.i];
  Any a24 = toStr ( a27 );
  println ( a24 );
  Any a33 = Int(1);
  a35 = Int(0);
  a36 = Int( sizeof( a3 ) / sizeof( a3[0] ) );
  Any a34 = a3[a33.i];
  Any a31 = toStr ( a34 );
  println ( a31 );
  return 0;
}
