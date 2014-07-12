#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef int nat;

Any extract ( Any[] );

Any extract ( Any a0[] ){
  int count = 0;
  loop_start_label238: ;
  if(count == a1.i )){ goto label238; }
  Any a5 = Char( a0[count] );
  count++;
  Any a7 = Int(0);
  if ( dataAsInt( a5 ) >= dataAsInt( a7 ) ) { goto label239; };
  Any a8 = Int(0);
  Any a11 = Int(0);
  return a8;
  label239: ;
  goto loop_start_label238;
  label238: ;
  Any a10 = Int(0);
  Any a13 = Int(0);
  Any a14 = Int( sizeof( a0 ) / sizeof( a0[0] ) );
  a11 = a0[a10.i];
  a14 = Int(0);
  return a11;
}

int main (){
  Any a3 = Int(2);
  Any a4 = wyce_neg(a3);
  Any a5 = Int(3);
  Any a6 = wyce_neg(a5);
  Any a7 = Int(1);
  Any a8 = Int(2);
  Any a9 = Int(23);
  Any a10 = wyce_neg(a9);
  Any a11 = Int(3);
  Any a12 = Int(2345);
  Any a13 = Int(4);
  Any a14 = Int(5);
  Any a15[] = {a4, a6, a7, a8, a10, a11, a12, a13, a14};
  Any a18 = Int( sizeof( a15 ) / sizeof( a15[0] ) );
  Any a19 = Int(0);
  Any a2 = extract ( a15 );
  Any a1 = a2;
  Any a20 = a1;
  a19 = toStr ( a20 );
  println ( a19 );
  return 0;
}
