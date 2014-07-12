#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
Any* x1x_update ( Any[] );
Any x1x_f ( Any[] );

Any* x1x_update ( Any a0[] ){
  Any a9 = Int(0);
  Any a10 = Int(0);
  Any a11 = Int(10);
  a0[a10.i] = a11;
  return a0;
}

Any x1x_f ( Any a0[] ){
  Any a14 = Int( sizeof( a0 ) / sizeof( a0[0] ) );
  Any a15 = Int(0);
  Any a17 = Int(0);
  Any *a18 = a0[a17.i];
  Any a19 = Int( sizeof( a18 ) / sizeof( a18[0] ) );
  Any a20 = Int(0);
  Any *a10 = x1x_update ( a0 );
  a14 = Tuple( a0, a10);
  return a14;
}

int main (){
  Any a3 = Int(1);
  Any a4 = Int(2);
  Any a5 = Int(3);
  Any a6 = Int(4);
  Any a7[] = {a3, a4, a5, a6};
  Any a8[] = {a7};
  Any a13 = Int( sizeof( a8 ) / sizeof( a8[0] ) );
  Any a14 = Int(0);
  Any a16 = Int(0);
  Any *a17 = a8[a16.i];
  Any a18 = Int( sizeof( a17 ) / sizeof( a17[0] ) );
  Any a19 = Int(0);
  Any *a9 = x1x_f ( a8 );
  Any *a2 = Int( ((Any**)a9.ptr)[0]->i);
  Any *a1 = Int( ((Any**)a9.ptr)[1]->i);
  Any *a15 = a2;
  a14 = toStr ( a15 );
  println ( a14 );
  Any *a20 = a1;
  a19 = toStr ( a20 );
  println ( a19 );
  return 0;
}
