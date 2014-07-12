#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef record XXX dr2point;


int main (){
  Any a2 = Real(1.0);
  Any a3 = Real(2.23);
  Any a1 = null;
  Any a9 = a1;
  Any a8 = toStr ( a9 );
  println ( a8 );
  return 0;
}
