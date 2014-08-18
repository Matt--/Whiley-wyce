#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef struct {Any x; Any y; } bop;

Any x1x_f ( Any );

Any x1x_f ( Any a0 ){
  if(a0.type == ){ goto label160; };
  goto label161;
  label160: ;
  Any a2 = a0.x;
  Any a4 = a0.y;
  Any a5 = wyce_add( a2 , a4);
  return a5;
  label161: ;
  return a0;
}

int main (){
  Any a3 = Int(1);
  Any a2 = x1x_f ( a3 );
  Any a1 = a2;
  Any a8 = a1;
  Any a7 = toStr ( a8 );
  println ( a7 );
  Any a10 = Int(4);
  Any a11 = Int(10);
  bop a12 = { a10, a11 };
  Any a9 = x1x_f ( a12 );
  a1 = a9;
  Any a17 = a1;
  Any a16 = toStr ( a17 );
  println ( a16 );
  return 0;
}
