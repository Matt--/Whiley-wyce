#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef 
Any f ( Any );

Any f ( Any a0 ){
  if(a0.type == ){ goto label542; };
  goto label543;
  label542: ;
  Any a1 = Str("GOT IT");
  return a1;
  label543: ;
  Any a2 = Str("NOPE");
  return a2;
}

int main (){
  Any a5 = Real(1.2);
  Any a6 = Real(1.2);
  Any a4 = f ( a7 );
  println ( a4 );
  Any a12 = Int(1);
  Any a13 = Int(1);
  Any a11 = f ( a14 );
  println ( a11 );
  Any a19 = Int(1);
  Any a20 = Int(1);
  Any a18 = f ( a21 );
  println ( a18 );
  return 0;
}
