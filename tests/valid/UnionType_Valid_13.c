#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef int tenup;
typedef struct {Any data; Any op; } msg1;
typedef struct {Any index; } msg2;

Any x1x_f ( Any );

Any x1x_f ( Any a0 ){
  Any *a2 = a0;
  Any a1 = toStr ( a2 );
  return a1;
}

int main (){
  Any a2 [10];
  Any a3 = Int(11);
  Any a1 = Null();
  Any a6 = Int(1);
  msg2 a7 = { a6 };
  msg2 a5 = a7;
  Any a12 = a1;
  Any a11 = x1x_f ( a12 );
  println ( a11 );
  msg2 a17 = a5;
  Any a16 = x1x_f ( a17 );
  println ( a16 );
  return 0;
}
