#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef struct {Any x; Any y; } point;


int main (){
  Any a2 = Int(1);
  Any a3 = Int(1);
  point a4 = { a2, a3 };
  Any a8 = recordToStr2( "x", a4.x, "y", a4.y);
  println ( a8 );
  return 0;
}
