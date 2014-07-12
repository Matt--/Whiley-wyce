#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
Any sum ( Any[] );

Any sum ( Any a0[] ){
  Any a5 = Int(0);
  Any a4 = a5;
  Any a7 = Int(0);
  Any a6 = a7;
  Any a9 = Int(0);
  loop_start_label236: ;
  Any a11 = Int(0);
  Any a26 = Int(0);
  Any a27 = Int( sizeof( a0 ) / sizeof( a0[0] ) );
  Any a15 = a0[a4.i];
  Any a16 = wyce_add( a6 , a15);
  a6 = a16;
  Any a18 = Int(1);
  Any a19 = wyce_add( a4 , a18);
  a4 = a19;
  Any a21 = Int(0);
  Any a24 = Int( sizeof( a0 ) / sizeof( a0[0] ) );
  if ( dataAsInt( a19 ) >= dataAsInt( a24 ) ) { goto label236; };
  goto loop_start_label236;
  label236: ;
  return a6;
}

int main (){
  Any a5 = Int(1);
  Any a6[] = {a5};
  Any a9 = Int( sizeof( a6 ) / sizeof( a6[0] ) );
  Any a10 = Int(0);
  Any a4 = sum ( a6 );
  println ( a4 );
  Any a11 = Int(1);
  Any a12 = Int(2);
  Any a13[] = {a11, a12};
  Any a16 = Int( sizeof( a13 ) / sizeof( a13[0] ) );
  Any a17 = Int(0);
  a10 = sum ( a13 );
  println ( a10 );
  Any a18 = Int(1);
  Any a19 = Int(2);
  Any a20 = Int(3);
  Any a21[] = {a18, a19, a20};
  Any a24 = Int( sizeof( a21 ) / sizeof( a21[0] ) );
  Any a25 = Int(0);
  a17 = sum ( a21 );
  println ( a17 );
  return 0;
}
