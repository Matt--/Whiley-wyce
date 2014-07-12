#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
Any x1x_f ( Any );

Any x1x_f ( Any a0 ){
  if(a0.type == NULL_TYPE){ goto label155; };
  goto label156;
  label155: ;
  Any a1 = Int(1);
  return a1;
  label156: ;
  return a0;
}

int main (){
  Any a6 = Int(1);
  Any a5 = x1x_f ( a6 );
  Any a4 = toStr ( a5 );
  println ( a4 );
  Any a12 = Int(1);
  Any a13 = Int(2);
  Any a14 = Int(3);
  Any a15[] = {a12, a13, a14};
  Any a11 = x1x_f ( a15 );
  Any a10 = toStr ( a11 );
  println ( a10 );
  return 0;
}
