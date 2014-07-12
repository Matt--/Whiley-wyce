#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
Any f ( Any );

Any f ( Any a0 ){
  if(a0.type == ){ goto label12; };
  goto label13;
  label12: ;
  Any a1 = Str("GOT [INT]");
  return a1;
  label13: ;
  Any a2 = Str("GOT INT");
  return a2;
}

int main (){
  Any a2 = Int(1);
  Any a1 = a2;
  Any a7 = a1;
  Any a6 = f ( a7 );
  println ( a6 );
  Any a8 = Int(1);
  Any a9 = Int(2);
  Any a10 = Int(3);
  Any a11 = Int(4);
  Any a12[] = {a8, a9, a10, a11};
  a1 = a12;
  Any *a17 = a1;
  Any a16 = f ( a17 );
  println ( a16 );
  return 0;
}
