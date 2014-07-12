#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef int nat;

Any* f ( Any[] );

Any* f ( Any a0[] ){
  int count = 0;
  loop_start_label21: ;
  if(count == a1.i )){ goto label21; }
  Any a8 = Char( a0[count] );
  count++;
  Any a10 = Int(0);
  if ( dataAsInt( a8 ) >= dataAsInt( a10 ) ) { goto label22; };
  goto loop_start_label21;
  label21: ;
  Any a11 = Bool(false);
  goto label23;
  label22: ;
  a11 = Bool(true);
  label23: ;
  Any a12 = Bool(true);
  return a0;
}

int main (){
  Any a3 = Int(1);
  Any a4 = Int(2);
  Any a5 = Int(3);
  Any a6[] = {a3, a4, a5};
  int count = 0;
  loop_start_label24: ;
  if(count == a1.i )){ goto label24; }
  Any a9 = Char( a6[count] );
  count++;
  Any a11 = Int(0);
  goto loop_start_label24;
  label24: ;
  a9 = Int( sizeof( a6 ) / sizeof( a6[0] ) );
  Any a10 = Int(0);
  Any *a2 = f ( a6 );
  Any *a1 = a2;
  a11 = a1;
  a10 = toStr ( a11 );
  println ( a10 );
  return 0;
}
