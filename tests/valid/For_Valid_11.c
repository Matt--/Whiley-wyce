#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef 
Any f ( Any );

Any f ( Any a0 ){
  Any a2 = Int(0);
  Any a1 = a2;
  int count = a0[0];
  loop_start_label1154: ;
  if(count == a0[1]){ goto label1154; }
  Any a4 = a0[count];
  count++;
  Any a6 = Int(1);
  Any a7 = add( a1 , a6);
  a1 = a7;
  goto loop_start_label1154;
  label1154: ;
  return a1;
}

int main (){
  Any a2 = Int(1);
  Any a3 = Int(2);
  Any a4 = Int(3);
  Any a5 = Int(4);
  Any a6 = Int(5);
  Any a7[] = {a2, a3, a4, a5, a6};
  Any *a1 = a7;
  Any *a12 = a1;
  Any a11 = f ( a12 );
  println ( a11 );
  Any a14 = Int(10);
  Any a15 = Int(20);
  Any a16 = Int(30);
  Any a17 = Int(40);
