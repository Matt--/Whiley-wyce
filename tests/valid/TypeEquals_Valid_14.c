#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
Any f ( Any );

Any f ( Any a0 ){
  if(a0.type == ){ goto label18; };
  goto label19;
  label18: ;
  Any a1 = Str("{int x} | {int y}");
  return a1;
  label19: ;
  Any a2 = Str("int");
  return a2;
}

int main (){
  Any a5 = Int(1);
  Any a4 = f ( a6 );
  println ( a4 );
  Any a11 = Int(2);
  Any a10 = f ( a12 );
  println ( a10 );
  Any a17 = Int(1);
  Any a16 = f ( a17 );
  println ( a16 );
  return 0;
}
