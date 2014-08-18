#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef struct {Any x; } R1;
typedef struct {Any x; Any y; } R2;

Any x1x_f ( Any , Any[] );

Any x1x_f ( Any a0, Any a1[] ){
  Any a3 = Int(0);
  Any a2 = a3;
  Any a5 = Bool(true);
  if ( dataAsInt( a0 ) == dataAsInt( a5 ) ) { goto label127; };
  goto label128;
  label127: ;
  int count = a1[0];
  loop_start_label129: ;
  if(count == a1[1]){ goto label129; }
  Any a7 = Char( a1[count] );
  count++;
  Any a10 = wyce_add( a2 , a7);
  a2 = a10;
  goto loop_start_label129;
  label129: ;
  goto label130;
  label128: ;
  int count = a1[0];
  loop_start_label130: ;
  if(count == a1[1]){ goto label130; }
  Any a12 = Char( a1[count] );
  count++;
  Any a15 = wyce_sub( a2 , a12);
  a2 = a15;
  goto loop_start_label130;
  label130: ;
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
  Any a2 = x1x_f ( a3, a14 );
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
  Any a16 = x1x_f ( a17, a28 );
  Any a15 = a16;
  Any a33 = a1;
  Any a32 = toStr ( a33 );
  println ( a32 );
  Any a38 = a15;
  Any a37 = toStr ( a38 );
  println ( a37 );
  return 0;
}
