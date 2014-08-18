#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
Any x1x_getMessage ( Any );

Any x1x_getMessage ( Any a0 ){
  if(a0.type == ){ goto label162; };
  goto label163;
  label162: ;
  Any a2 = a0.msg;
  return a2;
  label163: ;
  Any a4 = a0;
  Any a3 = toStr ( a4 );
  return a3;
}

int main (){
  Any a5 = Str("HELLO WORLD");
  Any a6;
  
  Any a4 = x1x_getMessage ( a6 );
  println ( a4 );
  Any a11 = Int(1);
  Any a10 = x1x_getMessage ( a11 );
  println ( a10 );
  return 0;
}
