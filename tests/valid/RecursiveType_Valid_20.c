#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef int nat;
typedef int pos;
typedef typedef 
Any f ( Any );

Any f ( Any a0 ){
  return a0;
}

int main (){
  Any a3 = Int(1);
  Any a4 = Int(2);
  Any a6 = Int(1);
  Any a2 = f ( a7 );
  Any a1 = a2;
  Any a12 = a1;
  Any a11 = toStr ( a12 );
  println ( a11 );
  return 0;
}
