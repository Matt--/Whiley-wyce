#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef int nat;


int main (){
  Any a2 = Int(1);
  Any a3 = Int(2);
  Any a4 = Int(3);
  Any a5[] = {a2, a3, a4};
  Any a7 = Int(0);
  Any a6 = a7;
  Any a9 = Int(0);
  int count = a5[0];
  loop_start_label1158: ;
  if(count == a5[1]){ goto label1158; }
  Any a11 = a5[count];
  count++;
  Any a13 = Int(0);
  ####### assume ge
  Any a16 = add( a6 , a11);
  a6 = a16;
  Any a18 = Int(0);
  goto loop_start_label1158;
  label1158: ;
  Any a23 = a6;
  Any a22 = toStr ( a23 );
  println ( a22 );
  return 0;
}
