#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
Any* x1x_f ( Any );

Any* x1x_f ( Any a0 ){
  Any a6[] = {a0};
  int count = 0;
  loop_start_label30: ;
  if(count == a1.i )){ goto label30; }
  Any a8 = Char( a6[count] );
  count++;
  Any a10 = Int(0);
  Any a12 = Int(255);
  goto loop_start_label30;
  label30: ;
  return a6;
}

int main (){
  Any a3 = Int(0);
  Any a6 = Int(0);
  if ( dataAsInt( a3 ) == dataAsInt( a6 ) ) { goto label31; };
  Any a8 = Int(169);
  label31: ;
  Any *a2 = x1x_f ( a3 );
  Any *a1 = a2;
  a8 = a1;
  Any a7 = toStr ( a8 );
  println ( a7 );
  return 0;
}
