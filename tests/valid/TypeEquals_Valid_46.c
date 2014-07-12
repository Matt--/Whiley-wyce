#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
Any f ( Any );

Any f ( Any a0 ){
  if(a0.type == INT_TYPE){ goto label20; };
  goto label21;
  label20: ;
  return a0;
  label21: ;
  Any a2 = Int(1);
  return a2;
}

int main (){
  Any a3 = Int(1);
  Any a4 = Int(2);
  Any a5 = Int(3);
  Any a6[] = {a3, a4, a5};
  Any a2 = f ( a6 );
  Any a1 = a2;
  Any a11 = a1;
  Any a10 = toStr ( a11 );
  println ( a10 );
  Any a13 = Int(123);
  Any a12 = f ( a13 );
  a1 = a12;
  Any a18 = a1;
  Any a17 = toStr ( a18 );
  println ( a17 );
  return 0;
}
