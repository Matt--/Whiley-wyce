#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"

int main (){
  Any a2 = Real(12376523476123.98712345);
  Any a4 = Real(0.002348976);
  Any a5 = wyce_add( a2 , a4);
  Any a1 = a5;
  Any a10 = a1;
  Any a9 = toStr ( a10 );
  println ( a9 );
  return 0;
}
