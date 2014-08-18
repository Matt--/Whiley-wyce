#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef int nat;

Any* x1x_f ( Any[] , Any[] );

Any* x1x_f ( Any a0[], Any a1[] ){
  #### appending arrays not yet catered for;
  int count = 0;
  loop_start_label155: ;
  if(count == a1.i )){ goto label155; }
  Any a6 = Char( a4[count] );
  count++;
  Any a8 = Int(0);
  goto loop_start_label155;
  label155: ;
  return a4;
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
  int count = 0;
  loop_start_label156: ;
  if(count == a1.i )){ goto label156; }
  Any a18 = Char( a5[count] );
  count++;
  Any a20 = Int(0);
  goto loop_start_label156;
  label156: ;
  int count = 0;
  loop_start_label157: ;
  if(count == a1.i )){ goto label157; }
  a18 = Char( a10[count] );
  count++;
  a20 = Int(0);
  goto loop_start_label157;
  label157: ;
  Any *a12 = x1x_f ( a5, a10 );
  Any *a11 = a12;
  Any *a19 = a11;
  a18 = toStr ( a19 );
  println ( a18 );
  return 0;
}
