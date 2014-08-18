#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
Any x1x_f ( Any );

Any x1x_f ( Any a0 ){
  if(a0.type == ){ goto label77; };
  goto label78;
  label77: ;
  Any a1 = Str("{int x} | {int y}");
  return a1;
  label78: ;
  Any a2 = Str("int");
  return a2;
}

int main (){
  Any a5 = Int(1);
  Any a6;
  
  Any a4 = x1x_f ( a6 );
  println ( a4 );
  Any a11 = Int(2);
  Any a12;
  
  Any a10 = x1x_f ( a12 );
  println ( a10 );
  Any a17 = Int(1);
  Any a16 = x1x_f ( a17 );
  println ( a16 );
  return 0;
}
