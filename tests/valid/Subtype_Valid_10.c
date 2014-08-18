#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef int sr5nat;


int main (){
  Any a2 = Int(1);
  typedef struct {Any f; }Record3;
  Record3 a3 = { a2 };
  Any a4 = Int(2);
  a3.f = a4;
  Any a8 = recordToStr1( "f", a3.f);
  println ( a8 );
  return 0;
}
