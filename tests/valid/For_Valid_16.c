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
  int count = a5[0];
  loop_start_label116: ;
  if(count == a5[1]){ goto label116; }
  Any a9 = Char( a5[count] );
  count++;
  Any a12 = wyce_add( a6 , a9);
  a6 = a12;
  goto loop_start_label116;
  label116: ;
  Any a17 = a6;
  Any a16 = toStr ( a17 );
  println ( a16 );
  return 0;
}
