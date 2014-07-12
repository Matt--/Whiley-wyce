#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
Any x1x_test ( Any[] , Any[] );

Any x1x_test ( Any a0[], Any a1[] ){
  Any *a2 = a0;
  label172: ;
  Any *a3 = a1;
  #### appending arrays not yet catered for;
  int count = 0;
  loop_start_label171: ;
  if(count == a1.i )){ goto label171; }
  Any a5 = Char( a4[count] );
  count++;
  if(a5.type == INT_TYPE){ goto label172; };
  goto label173;
  Any a6 = Bool(true);
  return a6;
  label173: ;
  goto loop_start_label171;
  label171: ;
  Any a7 = Bool(false);
  return a7;
}

int main (){
  Any a3 = Real(1.2);
  Any a4 = Real(2.3);
  Any a5 = Real(3.4);
  Any a6[] = {a3, a4, a5};
  Any a7 = Int(1);
  Any a8 = Int(2);
  Any a9 = Int(3);
  Any a10 = Int(4);
  Any a11 = Int(5);
  Any a12 = Int(6);
  Any a13 = Int(7);
  Any a14 = Int(8);
  Any a15[] = {a7, a8, a9, a10, a11, a12, a13, a14};
  Any a2 = x1x_test ( a6, a15 );
  Any a1 = a2;
  Any a20 = a1;
  Any a19 = toStr ( a20 );
  println ( a19 );
  Any a22 = Real(1.2);
  Any a23 = Real(2.3);
  Any a24 = Real(3.4);
  Any a25[] = {a22, a23, a24};
  Any a26 [10];
  Any a21 = x1x_test ( a25, a26 );
  a1 = a21;
  Any a31 = a1;
  Any a30 = toStr ( a31 );
  println ( a30 );
  return 0;
}
