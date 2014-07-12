#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef int nat;

Any* abs ( Any[] );
Any* abs ( Any[] , Any );

Any* abs ( Any a0[] ){
  Any a6 = Int(0);
  Any a11 = Int(0);
  a11 = Int( sizeof( a0 ) / sizeof( a0[0] ) );
  Any a13 = Int(0);
  a13, a6};
  int count = 0;
  loop_start_label528: ;
  if(count == a1.i )){ goto label528; }
  Any a12 = Char( a15[count] );
  count++;
  Any a18 = a0[a12.i];
  Any a19 = Int(0);
  if ( dataAsInt( a18 ) < dataAsInt( a19 ) ) { goto label529; };
  goto loop_start_label528;
  label528: ;
  goto label530;
  label529: ;
  Any a20 = Bool(false);
  goto label531;
  label530: ;
  a20 = Bool(true);
  label531: ;
  Any a21 = Bool(true);
  Any *a4 = abs ( a0, a6 );
  int count = 0;
  loop_start_label532: ;
  if(count == a1.i )){ goto label532; }
  a6 = Char( a4[count] );
  count++;
  Any a8 = Int(0);
  goto loop_start_label532;
  label532: ;
  return a4;
}

Any* abs ( Any a0[], Any a1 ){
  Any a17 = Int( sizeof( a0 ) / sizeof( a0[0] ) );
  if ( dataAsInt( a1 ) != dataAsInt( a17 ) ) { goto label538; };
  int count = 0;
  loop_start_label539: ;
  if(count == a1.i )){ goto label539; }
  Any a20 = Char( a0[count] );
  count++;
  Any a22 = Int(0);
  goto loop_start_label539;
  label539: ;
  return a0;
  label538: ;
  Any a31 = Int(0);
  Any a32 = Int( sizeof( a0 ) / sizeof( a0[0] ) );
  Any a23 = a0[a1.i];
  a20 = abs ( a23 );
  a0[a1.i] = a20;
  Any a27 = Int(1);
  Any a28 = wyce_add( a1 , a27);
  Any a33 = Int(0);
  a33 = Int( sizeof( a0 ) / sizeof( a0[0] ) );
  Any a35 = Int(0);
  a35, a28};
  int count = 0;
  loop_start_label540: ;
  if(count == a1.i )){ goto label540; }
  Any a34 = Char( a37[count] );
  count++;
  Any a40 = a0[a34.i];
  Any a41 = Int(0);
  if ( dataAsInt( a40 ) < dataAsInt( a41 ) ) { goto label541; };
  goto loop_start_label540;
  label540: ;
  goto label542;
  label541: ;
  Any a42 = Bool(false);
  goto label543;
  label542: ;
  a42 = Bool(true);
  label543: ;
  Any a43 = Bool(true);
  Any *a24 = abs ( a0, a28 );
  int count = 0;
  loop_start_label544: ;
  if(count == a1.i )){ goto label544; }
  Any a26 = Char( a24[count] );
  count++;
  a28 = Int(0);
  goto loop_start_label544;
  label544: ;
  return a24;
}

int main (){
  Any a2 = Int(1);
  Any a3 = Int(3);
  Any a4 = wyce_neg(a3);
  Any a5 = Int(5);
  Any a6 = wyce_neg(a5);
  Any a7 = Int(7);
  Any a8 = Int(9);
  Any a9 = wyce_neg(a8);
  Any a10 = Int(11);
  Any a11[] = {a2, a4, a6, a7, a9, a10};
  Any a16 = Int( sizeof( a11 ) / sizeof( a11[0] ) );
  Any a17 = Int(0);
  Any *a12 = abs ( a11 );
  Any *a1 = a12;
  Any *a18 = a1;
  a17 = toStr ( a18 );
  println ( a17 );
  return 0;
}
