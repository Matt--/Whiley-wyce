#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
Any x1x_f ( Any );

Any x1x_f ( Any a0 ){
  Any a2 = a0;
  Any a1 = a2;
  Any a4 = a1;
  Any a3 = toStr ( a4 );
  return a3;
}

int main (){
  Any a5 = Int(3);
  Any a8 = ;
  Any a4 = x1x_f ( a5 );
  println ( a4 );
  return 0;
}
