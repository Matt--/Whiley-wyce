#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef struct {Any b1; Any b2; } bytes;

bytes x1x_f ( Any  );

bytes x1x_f ( Any a0 ){
  Any a8 = Int(1);
  Any a9 = wyce_add( a0, a8);
  bytes a10 = { a0, a9 };
  Any a13 = a10.b1;
  Any a15 = Int(128);
  Any a16 = wyce_neg(a15);
  Any a18 = Int(127);
  a13 = a10.b2;
  a15 = Int(128);
  a16 = wyce_neg(a15);
  a18 = Int(127);
  return a10;
}

int main (){
  Any a6 = Int(1);
  Any a9 = Int(0);
  Any a11 = Int(10);
  bytes a5 = x1x_f ( a6 );
  Any a4 = recordToStr2( "b1", a5.b1, "b2", a5.b2);
  println ( a4 );
  Any a12 = Int(2);
  Any a15 = Int(0);
  Any a17 = Int(10);
  a11 = x1x_f ( a12 );
  Any a10 = recordToStr2( "b1", a11.b1, "b2", a11.b2);
  println ( a10 );
  Any a18 = Int(9);
  Any a21 = Int(0);
  Any a23 = Int(10);
  a17 = x1x_f ( a18 );
  Any a16 = recordToStr2( "b1", a17.b1, "b2", a17.b2);
  println ( a16 );
  return 0;
}
