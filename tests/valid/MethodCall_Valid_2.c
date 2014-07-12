#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
Any get ( );
Any f ( );

Any get (){
  Any a0 = Int(1);
  return a0;
}

Any f (){
  Any a0 = Int(1);
  Any a1 = Int(2);
  Any a2 = Int(3);
  Any a3 = get (  );
  Any a4[] = {a0, a1, a2, a3};
  return a4;
}

int main (){
  Any *a9 = f (  );
  Any a8 = toStr ( a9 );
  println ( a8 );
  return 0;
}
