#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef int nat;

Any get ( Any[] , Any );

Any get ( Any a0[], Any a1 ){
  Any a9 = Int( sizeof( a0 ) / sizeof( a0[0] ) );
  if ( dataAsInt( a1 ) != dataAsInt( a9 ) ) { goto label34; };
  Any a10 = Int(0);
  Any a20 = Int(0);
  return a10;
  label34: ;
  Any a16 = Int(0);
  Any a17 = Int( sizeof( a0 ) / sizeof( a0[0] ) );
  Any a13 = a0[a1.i];
  a20 = Int(0);
  return a13;
}

int main (){
  Any a2 = Int(1);
  Any a3 = Int(3);
  Any a4 = Int(5);
  Any a5 = Int(7);
  Any a6 = Int(9);
  Any a7 = Int(11);
  Any a8[] = {a2, a3, a4, a5, a6, a7};
  Any a12 = Int(0);
  int count = 0;
  loop_start_label35: ;
  if(count == a1.i )){ goto label35; }
  Any a16 = Char( a8[count] );
  count++;
  Any a18 = Int(0);
  goto loop_start_label35;
  label35: ;
  a16 = Int(0);
  Any a19 = Int( sizeof( a8 ) / sizeof( a8[0] ) );
  Any a10 = get ( a8, a12 );
  Any a9 = a10;
  Any a17 = a9;
  a16 = toStr ( a17 );
  println ( a16 );
  return 0;
}
