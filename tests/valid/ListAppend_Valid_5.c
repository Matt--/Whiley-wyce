#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef int nat;

Any x1x_f ( Any[] , Any[] , Any );

Any x1x_f ( Any a0[], Any a1[], Any a2 ){
  #### appending arrays not yet catered for;
  Any a18 = Int(0);
  Any a19 = Int( sizeof( a11 ) / sizeof( a11[0] ) );
  Any a14 = a11[a2.i];
  Any a17 = Int(0);
  return a14;
}

int main (){
  Any a2 = Int(1);
  Any a3 = Int(2);
  Any a4 = Int(3);
  Any a5[] = {a2, a3, a4};
  Any a7 = Int(5);
  Any a8 = Int(6);
  Any a9 = Int(7);
  Any a10[] = {a7, a8, a9};
  Any a15 = Int(1);
  int count = 0;
  loop_start_label167: ;
  if(count == a1.i )){ goto label167; }
  Any a20 = Char( a5[count] );
  count++;
  Any a22 = Int(0);
  goto loop_start_label167;
  label167: ;
  int count = 0;
  loop_start_label168: ;
  if(count == a1.i )){ goto label168; }
  a20 = Char( a10[count] );
  count++;
  a22 = Int(0);
  goto loop_start_label168;
  label168: ;
  Any a21 = Int(0);
  a21 = Int( sizeof( a5 ) / sizeof( a5[0] ) );
  Any a23 = Int( sizeof( a10 ) / sizeof( a10[0] ) );
  Any a24 = wyce_add( a21 , a23);
  Any a12 = x1x_f ( a5, a10, a15 );
  Any a11 = a12;
  a20 = a11;
  Any a19 = toStr ( a20 );
  println ( a19 );
  a24 = Int(4);
  int count = 0;
  loop_start_label169: ;
  if(count == a1.i )){ goto label169; }
  Any a29 = Char( a5[count] );
  count++;
  Any a31 = Int(0);
  goto loop_start_label169;
  label169: ;
  int count = 0;
  loop_start_label170: ;
  if(count == a1.i )){ goto label170; }
  a29 = Char( a10[count] );
  count++;
  a31 = Int(0);
  goto loop_start_label170;
  label170: ;
  Any a30 = Int(0);
  a30 = Int( sizeof( a5 ) / sizeof( a5[0] ) );
  Any a32 = Int( sizeof( a10 ) / sizeof( a10[0] ) );
  Any a33 = wyce_add( a30 , a32);
  a21 = x1x_f ( a5, a10, a24 );
  a11 = a21;
  a29 = a11;
  Any a28 = toStr ( a29 );
  println ( a28 );
  return 0;
}
