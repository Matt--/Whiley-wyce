#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
Any x1x_g ( Any );
Any x1x_f ( Any );

Any x1x_g ( Any a0 ){
  Any a2 = Int(0);
  if ( dataAsInt( a0 ) <= dataAsInt( a2 ) ) { goto label34; };
  Any a4 = Int(125);
  if ( dataAsInt( a0 ) < dataAsInt( a4 ) ) { goto label35; };
  label34: ;
  Any a5 = Int(1);
  Any a11 = Int(0);
  Any a13 = Int(125);
  return a5;
  label35: ;
  a11 = Int(0);
  a13 = Int(125);
  return a0;
}

Any x1x_f ( Any a0 ){
  Any a1 = x1x_g ( a0 );
  int count = 0;
  loop_start_label37: ;
  if(count == a1.i )){ goto label37; }
  Any a5 = Char( a3[count] );
  count++;
  Any a7 = Int(128);
  Any a8 = wyce_neg(a7);
  Any a10 = Int(127);
  goto loop_start_label37;
  label37: ;
  return a3;
}

int main (){
  Any a3 = Int(0);
  Any a2 = x1x_f ( a3 );
  Any a1 = a2;
  Any a8 = a1;
  Any a7 = toStr ( a8 );
  println ( a7 );
  return 0;
}
