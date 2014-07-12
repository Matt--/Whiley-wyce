#define LIBRARY_TESTING true

#include "cCompiler/mattCompiler.h"
#include "cCompiler/mattCompiler_library.c"
Any indexOf ( Any[] , Any );

Any indexOf ( Any a0[], Any a1 ){
  Any a3 = Int(0);
  Any a2 = a3;
  Any a5 = Int(0);
  label3: ;
  loop_start_label1: ;
  Any a7 = Int(0);
  Any a10 = Int( sizeof( a0 ) / sizeof( a0[0] ) );
  if ( dataAsInt( a2 ) >= dataAsInt( a10 ) ) { goto label1; };
  Any a24 = Int(0);
  Any a25 = Int( sizeof( a0 ) / sizeof( a0[0] ) );
  Any a13 = a0[a2.i];
  if ( dataAsInt( a13 ) != dataAsInt( a1 ) ) { goto label2; };
  Any a15 = a2;
  if(a15.type == NULL_TYPE){ goto label3; };
  Any a29 = a0[a15.i];
  return a15;
  label2: ;
  Any a17 = Int(1);
  Any a18 = add( a2 , a17);
  a2 = a18;
  Any a20 = Int(0);
  goto loop_start_label1;
  label1: ;
  Any a21 = Null();
  if(a21.type == NULL_TYPE){ goto label3; };
  a29 = a0[a21.i];
  return a21;
}

int main (){
  Any a5 = Int(1);
  Any a6 = Int(2);
  Any a7 = Int(3);
  Any a8[] = {a5, a6, a7};
  Any a9 = Int(1);
  Any a4 = indexOf ( a8, a9 );
  println ( a4 );
  Any a14 = Int(1);
  Any a15 = Int(2);
  Any a16 = Int(3);
  Any a17[] = {a14, a15, a16};
  Any a18 = Int(0);
  Any a13 = indexOf ( a17, a18 );
  println ( a13 );
  return 0;
}
