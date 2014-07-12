#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef int nat;

Any* inc ( Any[] );

Any* inc ( Any a0[] ){
  Any a2 = Int(0);
  Any a1 = a2;
  Any a4 = Int(0);
  Any *a5 = a0;
  int count = a5[0];
  loop_start_label74: ;
  if(count == a5[1]){ goto label74; }
  Any a6 = Char( a5[count] );
  count++;
  Any a8 = Int(0);
  Any a11 = Int( sizeof( a0 ) / sizeof( a0[0] ) );
  if ( dataAsInt( a1 ) >= dataAsInt( a11 ) ) { goto label75; };
  Any a30 = Int(0);
  Any a31 = Int( sizeof( a0 ) / sizeof( a0[0] ) );
  Any a15 = a0[a1.i];
  Any a16 = Int(1);
  Any a17 = wyce_add( a15 , a16);
  a0[a1.i] = a17;
  label75: ;
  Any a19 = Int(1);
  Any a20 = wyce_add( a1 , a19);
  a1 = a20;
  Any a22 = Int(0);
  goto loop_start_label74;
  label74: ;
  int count = 0;
  loop_start_label76: ;
  if(count == a1.i )){ goto label76; }
  Any a23 = Char( a0[count] );
  count++;
  Any a25 = Int(0);
  if ( dataAsInt( a23 ) < dataAsInt( a25 ) ) { goto label77; };
  goto loop_start_label76;
  label76: ;
  goto label78;
  label77: ;
  Any a26 = Bool(false);
  goto label79;
  label78: ;
  a26 = Bool(true);
  label79: ;
  Any a27 = Bool(true);
  int count = 0;
  loop_start_label80: ;
  if(count == a1.i )){ goto label80; }
  a30 = Char( a0[count] );
  count++;
  Any a32 = Int(0);
  goto loop_start_label80;
  label80: ;
  return a0;
}

int main (){
  Any a6 = Int(0);
  Any a7[] = {a6};
  int count = 0;
  loop_start_label81: ;
  if(count == a1.i )){ goto label81; }
  Any a10 = Char( a7[count] );
  count++;
  Any a12 = Int(0);
  goto loop_start_label81;
  label81: ;
  Any *a5 = inc ( a7 );
  Any a4 = toStr ( a5 );
  println ( a4 );
  Any a13 = Int(1);
  Any a14 = Int(2);
  Any a15 = Int(3);
  Any a16[] = {a13, a14, a15};
  int count = 0;
  loop_start_label82: ;
  if(count == a1.i )){ goto label82; }
  Any a19 = Char( a16[count] );
  count++;
  Any a21 = Int(0);
  goto loop_start_label82;
  label82: ;
  a12 = inc ( a16 );
  Any a11 = toStr ( a12 );
  println ( a11 );
  Any a22 = Int(10);
  Any a23 = Int(9);
  Any a24 = Int(8);
  Any a25 = Int(7);
  Any a26 = Int(6);
  Any a27 = Int(5);
  Any a28 = Int(4);
  Any a29 = Int(3);
  Any a30 = Int(2);
  Any a31 = Int(1);
  Any a32 = Int(0);
  Any a33[] = {a22, a23, a24, a25, a26, a27, a28, a29, a30, a31, a32};
  int count = 0;
  loop_start_label83: ;
  if(count == a1.i )){ goto label83; }
  Any a36 = Char( a33[count] );
  count++;
  Any a38 = Int(0);
  goto loop_start_label83;
  label83: ;
  a21 = inc ( a33 );
  Any a20 = toStr ( a21 );
  println ( a20 );
  return 0;
}
