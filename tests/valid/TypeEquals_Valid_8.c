#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
Any f ( Any );
Any g ( Any );

Any f ( Any a0 ){
  if(a0.type == ){ goto label10; };
  goto label11;
  label10: ;
  Any a1 = Str("[int]");
  return a1;
  label11: ;
  Any a2 = Str("real");
  return a2;
}

Any g ( Any a0 ){
  Any *a2 = a0;
  Any a1 = f ( a2 );
  return a1;
}

int main (){
  Any a5 = Int(1);
  Any a4 = f ( a5 );
  println ( a4 );
  Any a10 = Int(1);
  Any a11[] = {a10};
  Any a9 = f ( a11 );
  println ( a9 );
  Any a16 [10];
  Any a15 = f ( a16 );
  println ( a15 );
  return 0;
}
