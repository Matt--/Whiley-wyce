#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
Any x1x_f ( Any  );

Any x1x_f ( Any a0 ){
  if(a0.type == INT_TYPE){ goto label140; };
  goto label141;
  label140: ;
  return a0;
  label141: ;
  Any a2 = Int(1);
  return a2;
}

int main (){
  Any a6 = Bool(true);
  Any a5 = x1x_f ( a6 );
  Any a4 = toStr ( a5 );
  println ( a4 );
  Any a12 = Int(123);
  Any a11 = x1x_f ( a12 );
  Any a10 = toStr ( a11 );
  println ( a10 );
  return 0;
}
