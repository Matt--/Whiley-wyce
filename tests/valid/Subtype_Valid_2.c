#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef int sr7nat;


int main (){
  Any a2 = Int(1);
  typedef struct {Any f; }Record3;
  Record3 a3 = { a2 };
  Any a5 = a3.f;
  Any a6 = Int(1);
  Any a7 = wyce_add( a5, a6);
  a3.f = a7;
  Any a11 = recordToStr1( "f", a3.f);
  println ( a11 );
  return 0;
}
