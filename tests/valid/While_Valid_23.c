#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
Any f ( Any[] );

Any f ( Any a0[] ){
  Any a6 = Int(0);
  Any a57 = Int(0);
  Any a58 = Int( sizeof( a0 ) / sizeof( a0[0] ) );
  Any a7 = a0[a6.i];
  Any a4 = a7;
  Any a9 = Int(1);
  Any a8 = a9;
  Any a11 = Int(1);
  Any a13 = Int(0);
  a13, a9};
  int count = 0;
  loop_start_label140: ;
  if(count == a1.i ){ goto label140; }
  Any a12 = a15[count];
  count++;
  a57 = Int(0);
  a58 = Int( sizeof( a0 ) / sizeof( a0[0] ) );
  Any a19 = a0[a12.i];
  if ( dataAsInt( a7 ) == dataAsInt( a19 ) ) { goto label141; };
  goto loop_start_label140;
  label140: ;
  Any a20 = Bool(false);
  goto label142;
  label141: ;
  a20 = Bool(true);
  label142: ;
  Any a21 = Bool(true);
  loop_start_label143: ;
  Any a23 = Int(1);
  Any a25 = Int(0);
  a25, a8};
  int count = 0;
  loop_start_label144: ;
  if(count == a1.i ){ goto label144; }
  Any a24 = a27[count];
  count++;
  a57 = Int(0);
  a58 = Int( sizeof( a0 ) / sizeof( a0[0] ) );
  Any a31 = a0[a24.i];
  if ( dataAsInt( a4 ) == dataAsInt( a31 ) ) { goto label145; };
  goto loop_start_label144;
  label144: ;
  Any a32 = Bool(false);
  goto label146;
  label145: ;
  a32 = Bool(true);
  label146: ;
  Any a33 = Bool(true);
  Any a36 = Int( sizeof( a0 ) / sizeof( a0[0] ) );
  if ( dataAsInt( a8 ) >= dataAsInt( a36 ) ) { goto label143; };
  a57 = Int(0);
  a58 = Int( sizeof( a0 ) / sizeof( a0[0] ) );
  Any a39 = a0[a8.i];
  a4 = a39;
  Any a41 = Int(1);
  Any a42 = add( a8 , a41);
  a8 = a42;
  Any a44 = Int(1);
  Any a46 = Int(0);
  a46, a42};
  int count = 0;
  loop_start_label147: ;
  if(count == a1.i ){ goto label147; }
  Any a45 = a48[count];
  count++;
  a57 = Int(0);
  a58 = Int( sizeof( a0 ) / sizeof( a0[0] ) );
  Any a52 = a0[a45.i];
  if ( dataAsInt( a39 ) == dataAsInt( a52 ) ) { goto label148; };
  goto loop_start_label147;
  label147: ;
  Any a53 = Bool(false);
  goto label149;
  label148: ;
  a53 = Bool(true);
  label149: ;
  Any a54 = Bool(true);
  goto loop_start_label143;
  label143: ;
  Any a60 = Int(0);
  Any a62 = Int( sizeof( a0 ) / sizeof( a0[0] ) );
  a60, a62};
  int count = 0;
  loop_start_label150: ;
  if(count == a1.i ){ goto label150; }
  Any a59 = a63[count];
  count++;
  Any a67 = a0[a59.i];
  if ( dataAsInt( a4 ) == dataAsInt( a67 ) ) { goto label151; };
  goto loop_start_label150;
  label150: ;
  Any a68 = Bool(false);
  goto label152;
  label151: ;
  a68 = Bool(true);
  label152: ;
  Any a69 = Bool(true);
  return a4;
}

int main (){
  Any a5 = Int(1);
  Any a6 = Int(2);
  Any a7 = Int(3);
  Any a8 = Int(4);
  Any a9 = Int(5);
  Any a10 = Int(6);
  Any a11 = Int(7);
  Any a12 = Int(8);
  Any a13 = Int(9);
  Any a14 = Int(10);
  Any a15[] = {a5, a6, a7, a8, a9, a10, a11, a12, a13, a14};
  Any a18 = Int( sizeof( a15 ) / sizeof( a15[0] ) );
  Any a19 = Int(0);
  Any a4 = f ( a15 );
  println ( a4 );
  return 0;
}
