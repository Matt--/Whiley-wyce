#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef int sr6nat;
typedef struct {Any f; Any g; } sr6tup;


int main (){
  Any a2 = Int(1);
  Any a3 = Int(5);
  sr6tup a4 = { a2, a3 };
  Any a5 = Int(2);
  a4.f = a5;
  Any a9 = recordToStr2( "f", a4.f, "g", a4.g);
  println ( a9 );
  return 0;
}
