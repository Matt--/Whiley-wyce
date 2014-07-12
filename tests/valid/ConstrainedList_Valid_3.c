#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef int nat;

Any* init ( Any , Any );

Any* init ( Any a0, Any a1 ){
  Any a3 = Int(0);
  Any a2 = a3;
  Any a4 [10];
  Any a8 = Int( sizeof( a4 ) / sizeof( a4[0] ) );
  int count = 0;
  loop_start_label549: ;
  if(count == a1.i )){ goto label549; }
  Any a9 = Char( a4[count] );
  count++;
  if ( dataAsInt( a9 ) != dataAsInt( a1 ) ) { goto label550; };
  goto loop_start_label549;
  label549: ;
  goto label551;
  label550: ;
  Any a12 = Bool(false);
  goto label552;
  label551: ;
  a12 = Bool(true);
  label552: ;
  Any a13 = Bool(true);
  loop_start_label553: ;
  Any a16 = Int( sizeof( a4 ) / sizeof( a4[0] ) );
  int count = 0;
  loop_start_label554: ;
  if(count == a1.i )){ goto label554; }
  Any a17 = Char( a4[count] );
  count++;
  if ( dataAsInt( a17 ) != dataAsInt( a1 ) ) { goto label555; };
  goto loop_start_label554;
  label554: ;
  goto label556;
  label555: ;
  Any a20 = Bool(false);
  goto label557;
  label556: ;
  a20 = Bool(true);
  label557: ;
  Any a21 = Bool(true);
  if ( dataAsInt( a2 ) == dataAsInt( a0 ) ) { goto label553; };
  Any a26[] = {a1};
  #### appending arrays not yet catered for;
  a4 = null;
  Any a29 = Int(1);
  Any a30 = wyce_add( a2 , a29);
  a2 = a30;
  Any a33 = Int( sizeof( a27 ) / sizeof( a27[0] ) );
  int count = 0;
  loop_start_label558: ;
  if(count == a1.i )){ goto label558; }
  Any a34 = Char( a27[count] );
  count++;
  if ( dataAsInt( a34 ) != dataAsInt( a1 ) ) { goto label559; };
  goto loop_start_label558;
  label558: ;
  goto label560;
  label559: ;
  Any a37 = Bool(false);
  goto label561;
  label560: ;
  a37 = Bool(true);
  label561: ;
  Any a38 = Bool(true);
  goto loop_start_label553;
  label553: ;
  Any a46 = Int( sizeof( a4 ) / sizeof( a4[0] ) );
  int count = 0;
  loop_start_label562: ;
  if(count == a1.i )){ goto label562; }
  Any a48 = Char( a4[count] );
  count++;
  if ( dataAsInt( a48 ) != dataAsInt( a1 ) ) { goto label563; };
  goto loop_start_label562;
  label562: ;
  goto label564;
  label563: ;
  Any a51 = Bool(false);
  goto label565;
  label564: ;
  a51 = Bool(true);
  label565: ;
  Any a52 = Bool(true);
  return a4;
}

int main (){
  Any a1 = Int(0);
  Any a2 = Int(10);
  a1, a2};
  int count = 0;
  loop_start_label566: ;
  if(count == a1.i )){ goto label566; }
  Any a4 = Char( a3[count] );
  count++;
  Any a16 = Int(0);
  Any *a9 = init ( a4, a4 );
  Any a8 = toStr ( a9 );
  println ( a8 );
  goto loop_start_label566;
  label566: ;
  return 0;
}
