#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
Any x1x_f ( Any );
Any x1x_g ( Any );

Any x1x_f ( Any a0 ){
  Any *a2 = a0;
  Any a1 = toStr ( a2 );
  return a1;
}

Any x1x_g ( Any a0 ){
  Any a2 = a0;
  Any a1 = toStr ( a2 );
  return a1;
}

int main (){
  Any a2 = Int(1);
  Any a3 = Real(1.23);
  Any a4[] = {a3};
  Any *a1 = Null();
  Any *a10 = a1;
  Any a9 = x1x_f ( a10 );
  println ( a9 );
  Any a11 = Int(0);
  Any a12 = Int(123);
  Any a17 = x1x_g ( a13 );
  println ( a17 );
  return 0;
}
