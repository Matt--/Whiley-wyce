#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
Any x1x_f ( Any );

Any x1x_f ( Any a0 ){
  Any a2 = a0;
  Any a1 = toStr ( a2 );
  return a1;
}

int main (){
  Any a2 = Int(123);
  Any a1 = a2;
  Any a7 = a1;
  Any a6 = x1x_f ( a7 );
  println ( a6 );
  Any a8 = Real(1.234);
  a1 = a8;
  Any a13 = a1;
  Any a12 = x1x_f ( a13 );
  println ( a12 );
  return 0;
}
