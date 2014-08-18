#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef int nat;
typedef int pos;

Any x1x_f ( Any );

Any x1x_f ( Any a0 ){
  return a0;
}

int main (){
  Any a3 = Int(1);
  Any a4 = Int(2);
  Any a6 = Int(1);
  Any a7;
  
  Any a2 = x1x_f ( a7 );
  Any a1 = a2;
  Any a12 = a1;
  Any a11 = toStr ( a12 );
  println ( a11 );
  return 0;
}
