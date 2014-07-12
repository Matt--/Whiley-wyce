#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
Any x1x_f ( Any );

Any x1x_f ( Any a0 ){
  Any a2 = Int(0);
  Any a1 = a2;
  Any a4 = Int(0);
  Any a3 = a4;
  Any a6 = Int(2);
  Any a8 = wyce_mul( a6 , a2);
  loop_start_label66: ;
  Any a10 = Int(2);
  Any a12 = wyce_mul( a10 , a1);
  if ( dataAsInt( a1 ) >= dataAsInt( a0 ) ) { goto label66; };
  Any a16 = Int(1);
  Any a17 = wyce_add( a1 , a16);
  a1 = a17;
  Any a19 = Int(2);
  Any a20 = wyce_add( a3 , a19);
  a3 = a20;
  Any a22 = Int(2);
  Any a24 = wyce_mul( a22 , a17);
  goto loop_start_label66;
  label66: ;
  Any a27 = wyce_add( a1 , a3);
  return a27;
}

int main (){
  Any a5 = Int(10);
  Any a4 = x1x_f ( a5 );
  println ( a4 );
  return 0;
}
