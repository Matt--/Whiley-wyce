#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
Any x1x_f ( Any  );

Any x1x_f ( Any a0 ){
  if(a0.type == INT_TYPE){ goto label2; };
  goto label3;
  label2: ;
  Any a1 = Str("int");
  return a1;
  label3: ;
  Any a2 = Str("real");
  return a2;
}

int main (){
  Any a5 = Int(1);
  Any a4 = x1x_f ( a5 );
  println ( a4 );
  Any a10 = Real(1.134);
  Any a9 = x1x_f ( a10 );
  println ( a9 );
  Any a15 = Real(1.0);
  Any a14 = x1x_f ( a15 );
  println ( a14 );
  return 0;
}
