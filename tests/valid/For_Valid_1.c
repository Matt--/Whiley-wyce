#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"

int main (){
  Any a2 = Int(1);
  Any a3 = Int(2);
  Any a4 = Int(3);
  Any a5[] = {a2, a3, a4};
  int count = 0;
  loop_start_label237: ;
  if(count == a1.i )){ goto label237; }
  Any a7 = Char( a5[count] );
  count++;
  Any a12 = a7;
  Any a11 = toStr ( a12 );
  println ( a11 );
  goto loop_start_label237;
  label237: ;
  return 0;
}
