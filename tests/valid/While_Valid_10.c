#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
Any* extract ( Any[] );

Any* extract ( Any a0[] ){
  Any a2 = Int(0);
  Any a1 = a2;
  Any a4 = Int(1);
  Any a5[] = {a4};
  Any *a3 = a5;
  loop_start_label5: ;
  Any a8 = Int( sizeof( a0 ) / sizeof( a0[0] ) );
  if ( dataAsInt( a1 ) >= dataAsInt( a8 ) ) { goto label5; };
  Any a10 = Int(1);
  Any a11[] = {a10};
  #### appending arrays not yet catered for;
  a3 = null;
  Any a14 = Int(1);
  Any a15 = add( a1 , a14);
  a1 = a15;
  goto loop_start_label5;
  label5: ;
  return a3;
}

int main (){
  Any a3 = Int(1);
  Any a4 = Int(2);
  Any a5 = Int(3);
  Any a6 = Int(4);
  Any a7 = Int(5);
  Any a8 = Int(6);
  Any a9 = Int(7);
  Any a10[] = {a3, a4, a5, a6, a7, a8, a9};
  Any *a2 = extract ( a10 );
  Any *a1 = a2;
  Any *a15 = a1;
  Any a14 = toStr ( a15 );
  println ( a14 );
  Any a17 [10];
  Any *a16 = extract ( a17 );
  a1 = a16;
  Any *a22 = a1;
  Any a21 = toStr ( a22 );
  println ( a21 );
  return 0;
}
