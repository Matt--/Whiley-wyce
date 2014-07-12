#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
Any extract ( Any[] );

Any extract ( Any a0[] ){
  Any a2 = Int(0);
  Any a1 = a2;
  loop_start_label39: ;
  Any a5 = Int( sizeof( a0 ) / sizeof( a0[0] ) );
  if ( dataAsInt( a1 ) >= dataAsInt( a5 ) ) { goto label39; };
  Any a7 = Int(1);
  Any a8 = add( a1 , a7);
  a1 = a8;
  goto loop_start_label39;
  label39: ;
  Any a15 = Int( sizeof( a0 ) / sizeof( a0[0] ) );
  return a1;
}

int main (){
  Any a3 = Int(2);
  Any a4 = neg(a3);
  Any a5 = Int(3);
  Any a6 = neg(a5);
  Any a7 = Int(1);
  Any a8 = Int(2);
  Any a9 = Int(23);
  Any a10 = neg(a9);
  Any a11 = Int(3);
  Any a12 = Int(2345);
  Any a13 = Int(4);
  Any a14 = Int(5);
  Any a15[] = {a4, a6, a7, a8, a10, a11, a12, a13, a14};
  Any a2 = extract ( a15 );
  Any a1 = a2;
  Any a20 = a1;
  Any a19 = toStr ( a20 );
  println ( a19 );
  return 0;
}
