#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
Any duplicate ( Any );

Any duplicate ( Any a0 ){
  Any a4 = Int(0);
  Any a3 = a4;
  Any a6 = Int(0);
  Any a5 = a6;
  Any a10 = Int(2);
  Any a12 = mul( a10 , a4);
  loop_start_label7: ;
  Any a16 = Int(2);
  Any a18 = mul( a16 , a3);
  if ( dataAsInt( a3 ) >= dataAsInt( a0 ) ) { goto label7; };
  Any a22 = Int(2);
  Any a23 = add( a5 , a22);
  a5 = a23;
  Any a25 = Int(1);
  Any a26 = add( a3 , a25);
  a3 = a26;
  Any a30 = Int(2);
  Any a32 = mul( a30 , a26);
  goto loop_start_label7;
  label7: ;
  Any a38 = Int(2);
  Any a40 = mul( a38 , a0);
  return a5;
}

int main (){
  Any a1 = Int(0);
  Any a2 = Int(10);
  a1, a2};
  int count = 0;
  loop_start_label8: ;
  if(count == a1.i ){ goto label8; }
  Any a4 = a3[count];
  count++;
  Any a8 = Str("GOT: ");
  Any a13 = Int(0);
  Any a9 = duplicate ( a4 );
  a9 = toStr ( a9 );
  Any a11 = Str( strcat ( a8.s , a9.s ) );
  println ( a11 );
  goto loop_start_label8;
  label8: ;
  return 0;
}
