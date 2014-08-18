#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef struct {Any b1; Any b2; } bytes;

bytes x1x_f ( Any  );

bytes x1x_f ( Any a0 ){
  Any a2 = Int(2);
  bytes a3 = { a0, a2 };
  return a3;
}

int main (){
  Any a2 = Int(1);
  bytes a4 = x1x_f ( a2 );
  Any a9 = recordToStr2( "b1", a4.b1, "b2", a4.b2);
  println ( a9 );
  bytes a13 = { a2, a2 };
  a4 = a13;
  Any a17 = recordToStr2( "b1", a4.b1, "b2", a4.b2);
  println ( a17 );
  return 0;
}
