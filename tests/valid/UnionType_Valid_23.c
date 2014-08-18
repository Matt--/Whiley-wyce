#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
Any x1x_f ( Any );

Any x1x_f ( Any a0 ){
  Any *a2 = a0;
  Any a1 = toStr ( a2 );
  return a1;
}

int main (){
  Any a2 = Int(1);
  Any a3 = Real(1.23);
  Any a4[] = {a3};
  Any *a1 = Null();
  Any a7 = a0.args;
  Any a8 = Int( sizeof( a7 ) / sizeof( a7[0] ) );
  Any a9 = Int(10);
  if ( dataAsInt( a8 ) != dataAsInt( a9 ) ) { goto label160; };
  Any a10 = Real(1.23);
  Any a11 = Real(1.0);
  Any a12[] = {a11};
  a1 = Null();
  label160: ;
  Any a14 = Int(123);
  a1.op = a14;
  Any *a19 = a1;
  Any a18 = x1x_f ( a19 );
  println ( a18 );
  return 0;
}
