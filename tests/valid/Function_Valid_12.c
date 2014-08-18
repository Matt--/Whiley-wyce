#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef struct {Any op; Any s; } msg;

Any x1x_f ( msg );
Any x1x_f ( Any[] );
Any x1x_f ( Any[] );

Any x1x_f ( msg a0 ){
  msg a2 = a0;
  Any a1 = recordToStr2( "op", a2.op, "s", a2.s);
  return a1;
}

Any x1x_f ( Any a0[] ){
  Any *a2 = a0;
  Any a1 = recordToStr2( "op", a2.op, "s", a2.s);
  return a1;
}

Any x1x_f ( Any a0[] ){
  Any *a2 = a0;
  Any a1 = recordToStr2( "op", a2.op, "s", a2.s);
  return a1;
}

int main (){
  Any a5 = Int(1);
  Any a6 = Int(2);
  Any a7 = Int(3);
  Any a8[] = {a5, a6, a7};
  Any a4 = x1x_f ( a8 );
  println ( a4 );
  Any a13 = Real(1.2);
  Any a14 = Real(2.2);
  Any a15 = Real(3.3);
  Any a16[] = {a13, a14, a15};
  Any a12 = x1x_f ( a16 );
  println ( a12 );
  return 0;
}
