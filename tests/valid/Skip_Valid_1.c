#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
Any x1x_f ( Any  );

Any x1x_f ( Any a0 ){
  Any a2 = Int(0);
  if ( dataAsInt( a0 ) <= dataAsInt( a2 ) ) { goto label74; };
  goto label75;
  label74: ;
  Any a3 = Int(1);
  Any a4 = wyce_neg(a3);
  return a4;
  label75: ;
  return a0;
}

int main (){
  Any a6 = Int(1);
  Any a5 = x1x_f ( a6 );
  Any a4 = toStr ( a5 );
  println ( a4 );
  Any a12 = Int(10);
  Any a13 = wyce_neg(a12);
  Any a11 = x1x_f ( a13 );
  Any a10 = toStr ( a11 );
  println ( a10 );
  return 0;
}
