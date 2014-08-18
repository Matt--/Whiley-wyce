#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef int nat;


int main (){
  Any a2 = Int(14897);
  Any a6 = toStr ( a2 );
  println ( a6 );
  return 0;
}
