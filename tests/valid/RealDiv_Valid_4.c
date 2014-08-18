#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
Any x1x_g ( Any  );
Any x1x_f ( Any , Any  );

Any x1x_g ( Any a0 ){
  Any a2 = Int(3);
  Any a4 = Int(0);
  Any a3 = wyce_div( a0, a2);
  a3.type = REAL_TYPE;
  Any a9999 = Int(a3.i);
  a3.r = (double) a9999.i;
  return a3;
}

Any x1x_f ( Any a0, Any a1 ){
  Any a3 = x1x_g ( a0 );
  Any a2 = toStr ( a3 );
  return a2;
}

int main (){
  Any a5 = Int(1);
  Any a6 = Int(2);
  Any a4 = x1x_f ( a5, a6 );
  println ( a4 );
  return 0;
}
