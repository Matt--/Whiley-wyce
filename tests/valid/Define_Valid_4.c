#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef code;

Any x1x_f ( Any );

Any x1x_f ( Any a0 ){
  Any a3 [10];
  Any a1 = null;
  Any a6 = a1;
  Any a5 = toStr ( a6 );
  return a5;
}

int main (){
  Any a5 = Int(1);
  Any a8 = ;
  Any a4 = x1x_f ( a5 );
  println ( a4 );
  return 0;
}
