#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef struct {Any b1; Any b2; } bytes;

bytes x1x_f ( Any  );

bytes x1x_f ( Any a0 ){
  Any a2 = Int(2);
  bytes a3 = { a0, a2 };
  Any a5 = a3.b1;
  Any a7 = Int(128);
  Any a8 = wyce_neg(a7);
  Any a10 = Int(127);
  a5 = a3.b2;
  a7 = Int(128);
  a8 = wyce_neg(a7);
  a10 = Int(127);
  return a3;
}

int main (){
  Any a2 = Int(1);
  Any a9 = Int(128);
  Any a10 = wyce_neg(a9);
  Any a12 = Int(127);
  bytes a4 = x1x_f ( a2 );
  bytes a3 = a4;
  a10 = a3;
  a9 = recordToStr2( "b1", a10.b1, "b2", a10.b2);
  println ( a9 );
  bytes a13 = { a2, a2 };
  a3 = a13;
  bytes a18 = a3;
  Any a17 = recordToStr2( "b1", a18.b1, "b2", a18.b2);
  println ( a17 );
  return 0;
}
