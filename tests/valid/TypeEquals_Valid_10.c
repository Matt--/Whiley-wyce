#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef 
Any f ( Any );

Any f ( Any a0 ){
  if(a0.type == ){ goto label540; };
  goto label541;
  label540: ;
  Any a1 = Str("GOT IT");
  return a1;
  label541: ;
  Any a2 = Str("NOPE");
  return a2;
}

int main (){
  Any a5 = Int(1);
  Any a6 = Int(1);
  Any a4 = f ( a7 );
  println ( a4 );
  Any a12 = Int(1);
  Any a13 = Int(1);
  Any a11 = f ( a14 );
  println ( a11 );
  return 0;
}
