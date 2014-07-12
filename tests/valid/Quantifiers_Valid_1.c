#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
Any f ( Any );

Any f ( Any a0 ){
  Any a7 = a0;
  Any a6 = toStr ( a7 );
  return a6;
}

int main (){
  Any a2 = Int(1);
  Any a3 = Int(2);
  Any a4 = Int(3);
  int count = 0;
  loop_start_label9: ;
  if(count == a1.i )){ goto label9; }
  Any a14 = Char( a5[count] );
  count++;
  Any a16 = Int(0);
  if ( dataAsInt( a14 ) < dataAsInt( a16 ) ) { goto label10; };
  goto loop_start_label9;
  label9: ;
  goto label11;
  label10: ;
  Any a17 = Bool(false);
  goto label12;
  label11: ;
  a17 = Bool(true);
  label12: ;
  Any a18 = Bool(true);
  Any a11 = f ( a5 );
  println ( a11 );
  return 0;
}
