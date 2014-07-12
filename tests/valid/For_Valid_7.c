#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef record XXX R1;
typedef record XXX R2;

Any f ( Any , Any[] );

Any f ( Any a0, Any a1[] ){
  Any a3 = Int(0);
  Any a2 = a3;
  Any a5 = Bool(true);
  if ( dataAsInt( a0 ) == dataAsInt( a5 ) ) { goto label344; };
  goto label345;
  label344: ;
  int count = a1[0];
  loop_start_label346: ;
  if(count == a1[1]){ goto label346; }
  Any a7 = a1[count];
  count++;
  Any a10 = add( a2 , a7);
  a2 = a10;
  goto loop_start_label346;
  label346: ;
  goto label347;
  label345: ;
  int count = a1[0];
  loop_start_label347: ;
  if(count == a1[1]){ goto label347; }
  Any a12 = a1[count];
  count++;
  Any a15 = sub( a2 , a12);
  a2 = a15;
  goto loop_start_label347;
  label347: ;
  return a2;
}

int main (){
  Any a3 = Bool(true);
  Any a4 = Int(1);
  Any a5 = Int(2);
  Any a6 = Int(3);
  Any a7 = Int(4);
  Any a8 = Int(5);
  Any a9 = Int(6);
  Any a10 = Int(7);
  Any a11 = Int(8);
  Any a12 = Int(9);
  Any a13 = Int(10);
  Any a14[] = {a4, a5, a6, a7, a8, a9, a10, a11, a12, a13};
  Any a2 = f ( a3, a14 );
  Any a1 = a2;
  Any a17 = Bool(false);
  Any a18 = Int(1);
  Any a19 = Int(2);
  Any a20 = Int(3);
  Any a21 = Int(4);
  Any a22 = Int(5);
  Any a23 = Int(6);
  Any a24 = Int(7);
  Any a25 = Int(8);
  Any a26 = Int(9);
  Any a27 = Int(10);
  Any a28[] = {a18, a19, a20, a21, a22, a23, a24, a25, a26, a27};
  Any a16 = f ( a17, a28 );
  Any a15 = a16;
  Any a33 = a1;
  Any a32 = toStr ( a33 );
  println ( a32 );
  Any a38 = a15;
  Any a37 = toStr ( a38 );
  println ( a37 );
  return 0;
}
