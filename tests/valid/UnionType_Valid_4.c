#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
Any x1x_f ( Any  );

Any x1x_f ( Any a0 ){
  Any a1 = toStr ( a0 );
  return a1;
}

int main (){
  Any a2 = Int(123);
  Any a6 = x1x_f ( a2 );
  println ( a6 );
  Any a8 = Real(1.234);
  a2 = a8;
  Any a12 = x1x_f ( a2 );
  println ( a12 );
  return 0;
}
