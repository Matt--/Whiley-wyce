#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef int nat;

Any f ( );

Any f (){
  Any a0 = Int(1);
  Any a3 = Int(10);
  return a0;
}

int main (){
  Any a5 = f (  );
  Any a4 = toStr ( a5 );
  println ( a4 );
  return 0;
}
