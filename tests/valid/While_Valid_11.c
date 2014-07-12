#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
Any* extract ( Any[] );

Any* extract ( Any a0[] ){
  Any a2 = Int(0);
  Any a1 = a2;
  Any a3 [10];
  Any a6 = Int(0);
  int count = 0;
  loop_start_label22: ;
  if(count == a1.i ){ goto label22; }
  Any a7 = a3[count];
  count++;
  Any a9 = Int(0);
  if ( dataAsInt( a7 ) < dataAsInt( a9 ) ) { goto label23; };
  goto loop_start_label22;
  label22: ;
  goto label24;
  label23: ;
  Any a10 = Bool(false);
  goto label25;
  label24: ;
  a10 = Bool(true);
  label25: ;
  Any a11 = Bool(true);
  loop_start_label26: ;
  Any a13 = Int(0);
  int count = 0;
  loop_start_label27: ;
  if(count == a1.i ){ goto label27; }
  Any a14 = a3[count];
  count++;
  Any a16 = Int(0);
  if ( dataAsInt( a14 ) < dataAsInt( a16 ) ) { goto label28; };
  goto loop_start_label27;
  label27: ;
  goto label29;
  label28: ;
  Any a17 = Bool(false);
  goto label30;
  label29: ;
  a17 = Bool(true);
  label30: ;
  Any a18 = Bool(true);
  Any a21 = Int( sizeof( a0 ) / sizeof( a0[0] ) );
  if ( dataAsInt( a1 ) >= dataAsInt( a21 ) ) { goto label26; };
  Any a51 = Int(0);
  Any a52 = Int( sizeof( a0 ) / sizeof( a0[0] ) );
  Any a24 = a0[a1.i];
  Any a25 = Int(0);
  if ( dataAsInt( a24 ) >= dataAsInt( a25 ) ) { goto label31; };
  a51 = Int(0);
  a52 = Int( sizeof( a0 ) / sizeof( a0[0] ) );
  Any a29 = a0[a1.i];
  Any a30 = neg(a29);
  Any a31[] = {a30};
  #### appending arrays not yet catered for;
  a3 = null;
  goto label32;
  label31: ;
  a51 = Int(0);
  a52 = Int( sizeof( a0 ) / sizeof( a0[0] ) );
  Any a36 = a0[a1.i];
  Any a37[] = {a36};
  #### appending arrays not yet catered for;
  a3 = null;
  label32: ;
  Any a40 = Int(1);
  Any a41 = add( a1 , a40);
  a1 = a41;
  Any a43 = Int(0);
  int count = 0;
  loop_start_label33: ;
  if(count == a1.i ){ goto label33; }
  Any a44 = a3[count];
  count++;
  Any a46 = Int(0);
  if ( dataAsInt( a44 ) < dataAsInt( a46 ) ) { goto label34; };
  goto loop_start_label33;
  label33: ;
  goto label35;
  label34: ;
  Any a47 = Bool(false);
  goto label36;
  label35: ;
  a47 = Bool(true);
  label36: ;
  Any a48 = Bool(true);
  goto loop_start_label26;
  label26: ;
  int count = 0;
  loop_start_label37: ;
  if(count == a1.i ){ goto label37; }
  a51 = a3[count];
  count++;
  Any a53 = Int(0);
  goto loop_start_label37;
  label37: ;
  return a3;
}

int main (){
  Any a3 = Int(1);
  Any a4 = neg(a3);
  Any a5 = Int(2);
  Any a6 = Int(3);
  Any a7 = Int(4);
  Any a8 = neg(a7);
  Any a9 = Int(5);
  Any a10 = Int(6);
  Any a11 = Int(7);
  Any a12 = Int(23987);
  Any a13 = Int(23897);
  Any a14 = neg(a13);
  Any a15 = Int(0);
  Any a16 = Int(1);
  Any a17 = neg(a16);
  Any a18 = Int(1);
  Any a19 = Int(2389);
  Any a20 = neg(a19);
  Any a21[] = {a4, a5, a6, a8, a9, a10, a11, a12, a14, a15, a17, a18, a20};
  Any *a2 = extract ( a21 );
  Any *a1 = a2;
  Any *a26 = a1;
  Any a25 = toStr ( a26 );
  println ( a25 );
  Any a28 [10];
  Any *a27 = extract ( a28 );
  a1 = a27;
  Any *a33 = a1;
  Any a32 = toStr ( a33 );
  println ( a32 );
  return 0;
}
