#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef int pos;

Any extract ( Any[] );

Any extract ( Any a0[] ){
  int count = 0;
  loop_start_label240: ;
  if(count == a1.i )){ goto label240; }
  Any a5 = Char( a0[count] );
  count++;
  Any a8 = Int(1);
  Any a9 = wyce_sub( a5 , a8);
  Any a11 = Int(0);
  if ( dataAsInt( a9 ) >= dataAsInt( a11 ) ) { goto label241; };
  Any a12 = Int(1);
  Any a15 = Int(0);
  return a12;
  label241: ;
  goto loop_start_label240;
  label240: ;
  Any a14 = Int(0);
  Any a21 = Int(0);
  Any a22 = Int( sizeof( a0 ) / sizeof( a0[0] ) );
  a15 = a0[a14.i];
  Any a17 = Int(1);
  a21 = Int(0);
  a22 = Int( sizeof( a0 ) / sizeof( a0[0] ) );
  Any a18 = a0[a17.i];
  Any a19 = wyce_add( a15 , a18);
  a22 = Int(0);
  return a19;
}

int main (){
  Any a3 = Int(1);
  Any a4 = wyce_neg(a3);
  Any a5 = Int(2);
  Any a6 = wyce_neg(a5);
  Any a7 = Int(0);
  Any a8 = Int(1);
  Any a9 = Int(2);
  Any a10 = Int(3);
  Any a11[] = {a4, a6, a7, a8, a9, a10};
  Any a14 = Int( sizeof( a11 ) / sizeof( a11[0] ) );
  Any a15 = Int(1);
  Any a2 = extract ( a11 );
  Any a1 = a2;
  Any a16 = a1;
  a15 = toStr ( a16 );
  println ( a15 );
  return 0;
}
