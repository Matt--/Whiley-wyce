#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef int nat;

Any sum ( Any[] );

Any sum ( Any a0[] ){
  Any a2 = Int(0);
  Any a1 = a2;
  Any a4 = Int(0);
  Any a3 = a4;
  Any a6 = Int(0);
  Any a8 = Int(0);
  loop_start_label332: ;
  Any a10 = Int(0);
  ####### assume ge
  Any a12 = Int(0);
  ####### assume ge
  Any a15 = Int( sizeof( a0 ) / sizeof( a0[0] ) );
  if ( dataAsInt( a1 ) >= dataAsInt( a15 ) ) { goto label332; };
  Any a30 = Int(0);
  Any a31 = Int( sizeof( a0 ) / sizeof( a0[0] ) );
  Any a19 = a0[a1.i];
  Any a20 = add( a3 , a19);
  a3 = a20;
  Any a22 = Int(1);
  Any a23 = add( a1 , a22);
  a1 = a23;
  Any a25 = Int(0);
  Any a27 = Int(0);
  goto loop_start_label332;
  label332: ;
  a31 = Int(0);
  return a3;
}

int main (){
  Any a6 = ;
  int count = 0;
  loop_start_label333: ;
  if(count == arraySize.i ){ goto label333; }
  Any a9 = a6[count];
  count++;
  Any a11 = Int(0);
  goto loop_start_label333;
  label333: ;
  Any a5 = sum ( a6 );
  Any a4 = toStr ( a5 );
  println ( a4 );
  Any a12 = Int(1);
  Any a13 = Int(2);
  Any a14 = Int(3);
  Any a15[] = {a12, a13, a14};
  int count = 0;
  loop_start_label334: ;
  if(count == arraySize.i ){ goto label334; }
  Any a18 = a15[count];
  count++;
  Any a20 = Int(0);
  goto loop_start_label334;
  label334: ;
  a11 = sum ( a15 );
  Any a10 = toStr ( a11 );
  println ( a10 );
  Any a21 = Int(12387);
  Any a22 = Int(98123);
  Any a23 = Int(12398);
  Any a24 = Int(12309);
  Any a25 = Int(0);
  Any a26[] = {a21, a22, a23, a24, a25};
  int count = 0;
  loop_start_label335: ;
  if(count == arraySize.i ){ goto label335; }
  Any a29 = a26[count];
  count++;
  Any a31 = Int(0);
  goto loop_start_label335;
  label335: ;
  a20 = sum ( a26 );
  Any a19 = toStr ( a20 );
  println ( a19 );
  return 0;
}
