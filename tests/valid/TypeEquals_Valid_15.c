#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef 
Any f ( Any );

Any f ( Any a0 ){
  if(a0.type == ){ goto label550; };
  goto label551;
  label550: ;
  Any a1 = Str("[*]");
  return a1;
  label551: ;
  Any a2 = Str("int");
  return a2;
}

int main (){
  Any a5 = Int(1);
  Any a6 = Int(2);
  Any a7 = Int(3);
  Any a8[] = {a5, a6, a7};
  Any a4 = f ( a8 );
  println ( a4 );
  Any a13 = Int(1);
  Any a14[] = {a13};
  Any a15 = Int(2);
  Any a16[] = {a15};
  Any a17[] = {a14, a16};
  Any a12 = f ( a17 );
  println ( a12 );
  Any a22 = Int(1);
  Any a21 = f ( a22 );
  println ( a21 );
  return 0;
}
