#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef int nat;

Any x1x_f ( Any , Any );

Any x1x_f ( Any a0, Any a1 ){
  goto label237;
  label237: ;
  Any a14 = Int(0);
  Any a7 = wyce_div( a0 , a1);
  goto label238;
  label238: ;
  a14 = Int(0);
  return a7;
}

int main (){
  Any a3 = Int(10);
  Any a4 = Int(2);
  Any a9 = Int(0);
  Any a8 = Int(0);
  Any a2 = x1x_f ( a3, a4 );
  Any a1 = a2;
  a9 = a1;
  a8 = toStr ( a9 );
  println ( a8 );
  return 0;
}
