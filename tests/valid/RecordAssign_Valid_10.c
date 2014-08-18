#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef struct {Any b1; Any b2; } bytes;

bytes x1x_f ( Any  );

bytes x1x_f ( Any a0 ){
  Any a4 = Int(1);
  Any a5 = wyce_add( a0, a4);
  bytes a6 = { a0, a5 };
  return a6;
}

int main (){
  Any a6 = Int(1);
  bytes a5 = x1x_f ( a6 );
  Any a4 = recordToStr2( "b1", a5.b1, "b2", a5.b2);
  println ( a4 );
  Any a12 = Int(2);
  bytes a11 = x1x_f ( a12 );
  Any a10 = recordToStr2( "b1", a11.b1, "b2", a11.b2);
  println ( a10 );
  Any a18 = Int(9);
  bytes a17 = x1x_f ( a18 );
  Any a16 = recordToStr2( "b1", a17.b1, "b2", a17.b2);
  println ( a16 );
  return 0;
}
