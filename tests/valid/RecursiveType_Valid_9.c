#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef int nat;
typedef 

int main (){
  Any a2 = Int(14897);
  Any a1 = a2;
  Any a7 = a1;
  Any a6 = toStr ( a7 );
  println ( a6 );
  return 0;
}
