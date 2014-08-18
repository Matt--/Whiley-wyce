#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
Any x1x_f ( Any );

Any x1x_f ( Any a0 ){
  if(a0.type == ){ goto label75; };
  goto label76;
  label75: ;
  Any a1 = Str("{int}");
  return a1;
  label76: ;
  Any a2 = Str("int");
  return a2;
}

int main (){
  Any a5 = Int(1);
  Any a6 = Int(2);
  Any a7 = Int(3);
  Any a4 = x1x_f ( a8 );
  println ( a4 );
  Any a13 = Int(1);
  Any a12 = x1x_f ( a13 );
  println ( a12 );
  return 0;
}
