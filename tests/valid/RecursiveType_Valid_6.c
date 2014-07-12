#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef record XXX binop;
typedef 

int main (){
  Any a2 = Int(123);
  Any a1 = a2;
  Any a7 = a1;
  Any a6 = toStr ( a7 );
  println ( a6 );
  return 0;
}
