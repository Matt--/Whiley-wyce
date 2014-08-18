#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
Any x1x_f ( Any );

Any x1x_f ( Any a0 ){
  if(a0.type == ){ goto label6; };
  goto label7;
  label6: ;
  Any a2 = a0.err;
  Any a3 = Int( strlen( a2.s) );
  return a3;
  label7: ;
  Any a4 = Int(1);
  Any a5 = wyce_neg(a4);
  return a5;
}

int main (){
  Any a3 = Str("Hello World");
  Any a4;
  
  Any a2 = x1x_f ( a4 );
  Any a1 = a2;
  Any a9 = a1;
  Any a8 = toStr ( a9 );
  println ( a8 );
  Any a11 = Str("Gotcha");
  Any a13 = Int(1);
  Any a14;
  
  Any a10 = x1x_f ( a14 );
  a1 = a10;
  Any a19 = a1;
  Any a18 = toStr ( a19 );
  println ( a18 );
  return 0;
}
