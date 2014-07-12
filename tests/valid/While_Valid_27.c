#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
Any x1x_count ( Any , Any );

Any x1x_count ( Any a0, Any a1 ){
  Any a7 = Int(0);
  Any a6 = a7;
  Any a11 = wyce_mul( a0 , a1);
  loop_start_label67: ;
  if ( dataAsInt( a6 ) >= dataAsInt( a11 ) ) { goto label67; };
  Any a19 = Int(1);
  Any a20 = wyce_add( a6 , a19);
  a6 = a20;
  goto loop_start_label67;
  label67: ;
  return a6;
}

int main (){
  Any a5 = Int(0);
  Any a6 = Int(0);
  Any a10 = Int(0);
  Any a12 = Int(0);
  Any a4 = x1x_count ( a5, a6 );
  println ( a4 );
  Any a11 = Int(1);
  a12 = Int(1);
  Any a16 = Int(0);
  Any a18 = Int(0);
  a10 = x1x_count ( a11, a12 );
  println ( a10 );
  Any a17 = Int(5);
  a18 = Int(5);
  Any a22 = Int(0);
  Any a24 = Int(0);
  a16 = x1x_count ( a17, a18 );
  println ( a16 );
  return 0;
}
