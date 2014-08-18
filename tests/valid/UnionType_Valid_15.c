#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef struct {Any data; Any op; } msg1;
typedef struct {Any data; Any op; } msg2;

Any x1x_f ( Any );

Any x1x_f ( Any a0 ){
  Any *a2 = a0;
  Any a1 = toStr ( a2 );
  return a1;
}

int main (){
  Any a2 = Int(1);
  Any a3 = Int(2);
  Any a4 = Int(3);
  Any a5[] = {a2, a3, a4};
  Any a6 = Int(1);
  msg1 *a7 = { a5, a6 };
  msg1 *a1 = a7;
  msg1 *a12 = a1;
  Any a11 = x1x_f ( a12 );
  println ( a11 );
  Any *a15 = a7.data;
  Any *a13 = a15;
  Any *a20 = a13;
  Any a19 = toStr ( a20 );
  println ( a19 );
  return 0;
}
