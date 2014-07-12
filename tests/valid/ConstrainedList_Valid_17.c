#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef int nat;

Any* f ( Any[] );

Any* f ( Any a0[] ){
  Any a5 = Int(0);
  Any a8 = Int(0);
  Any a9 = Int( sizeof( a0 ) / sizeof( a0[0] ) );
  Any *a6 = a0[a5.i];
  int count = 0;
  loop_start_label14: ;
  if(count == a1.i )){ goto label14; }
  a8 = Char( a6[count] );
  count++;
  Any a10 = Int(0);
  goto loop_start_label14;
  label14: ;
  return a6;
}

int main (){
  Any a3 = Int(1);
  Any a4 = Int(2);
  Any a5 = Int(3);
  Any a6[] = {a3, a4, a5};
  Any a7 = Int(4);
  Any a8 = Int(5);
  Any a9 = Int(6);
  Any a10[] = {a7, a8, a9};
  Any a11[] = {a6, a10};
  int count = 0;
  loop_start_label15: ;
  if(count == a1.i )){ goto label15; }
  Any a14 = Char( a11[count] );
  count++;
  int count = 0;
  loop_start_label16: ;
  if(count == a1.i )){ goto label16; }
  Any a15 = Char( a14[count] );
  count++;
  Any a17 = Int(0);
  goto loop_start_label16;
  label16: ;
  goto loop_start_label15;
  label15: ;
  a14 = Int( sizeof( a11 ) / sizeof( a11[0] ) );
  a15 = Int(0);
  Any *a2 = f ( a11 );
  Any *a1 = a2;
  Any *a16 = a1;
  a15 = toStr ( a16 );
  println ( a15 );
  return 0;
}
