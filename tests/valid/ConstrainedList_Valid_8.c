#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef int nat;

Any* update ( Any[] , Any , Any );

Any* update ( Any a0[], Any a1, Any a2 ){
  Any a7 = a2;
  a0[a1.i] = a7;
  int count = 0;
  loop_start_label624: ;
  if(count == a1.i )){ goto label624; }
  Any a10 = Char( a0[count] );
  count++;
  Any a12 = Int(0);
  goto loop_start_label624;
  label624: ;
  return a0;
}

int main (){
  Any a2 = Int(1);
  Any a3 = Int(2);
  Any a4 = Int(3);
  Any a5 = Int(4);
  Any a6[] = {a2, a3, a4, a5};
  Any a9 = Int(0);
  Any a10 = Int(2);
  int count = 0;
  loop_start_label625: ;
  if(count == a1.i )){ goto label625; }
  Any a15 = Char( a6[count] );
  count++;
  Any a17 = Int(0);
  goto loop_start_label625;
  label625: ;
  Any a16 = Int(0);
  a16 = Int(0);
  a16 = Int( sizeof( a6 ) / sizeof( a6[0] ) );
  Any *a7 = update ( a6, a9, a10 );
  Any a13 = Int(1);
  Any a14 = Int(3);
  int count = 0;
  loop_start_label626: ;
  if(count == a1.i )){ goto label626; }
  Any a19 = Char( a7[count] );
  count++;
  Any a21 = Int(0);
  goto loop_start_label626;
  label626: ;
  Any a20 = Int(0);
  a20 = Int(0);
  a20 = Int( sizeof( a7 ) / sizeof( a7[0] ) );
  Any *a11 = update ( a7, a13, a14 );
  a17 = Int(2);
  Any a18 = Int(4);
  int count = 0;
  loop_start_label627: ;
  if(count == a1.i )){ goto label627; }
  Any a23 = Char( a11[count] );
  count++;
  Any a25 = Int(0);
  goto loop_start_label627;
  label627: ;
  Any a24 = Int(0);
  a24 = Int(0);
  a24 = Int( sizeof( a11 ) / sizeof( a11[0] ) );
  a15 = update ( a11, a17, a18 );
  a21 = Int(3);
  Any a22 = Int(5);
  int count = 0;
  loop_start_label628: ;
  if(count == a1.i )){ goto label628; }
  Any a27 = Char( a15[count] );
  count++;
  Any a29 = Int(0);
  goto loop_start_label628;
  label628: ;
  Any a28 = Int(0);
  a28 = Int(0);
  a28 = Int( sizeof( a15 ) / sizeof( a15[0] ) );
  a19 = update ( a15, a21, a22 );
  Any *a1 = a19;
  Any *a26 = a1;
  println ( a26 );
  return 0;
}
