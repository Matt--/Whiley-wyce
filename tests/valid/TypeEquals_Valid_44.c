#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
Any x1x_getMessage ( Any );

Any x1x_getMessage ( Any a0 ){
  if(a0.type == ){ goto label164; };
  goto label165;
  label164: ;
  Any a2 = a0.msg;
  return a2;
  label165: ;
  if(a0.type == ){ goto label164; };
  goto label166;
  Any a5 = a0.op;
  Any a3 = toStr ( a5 );
  return a3;
  label166: ;
  Any a7 = a0;
  Any a6 = toStr ( a7 );
  return a6;
}

int main (){
  Any a5 = Str("HELLO WORLD");
  Any a6;
  
  Any a4 = x1x_getMessage ( a6 );
  println ( a4 );
  Any a11 = Int(1);
  Any a10 = x1x_getMessage ( a11 );
  println ( a10 );
  Any a16 = Int(123);
  Any a17;
  
  Any a15 = x1x_getMessage ( a17 );
  println ( a15 );
  return 0;
}
