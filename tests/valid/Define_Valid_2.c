#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef struct {Any x; Any y; } dr2point;


int main (){
  Any a2 = Real(1.0);
  Any a3 = Real(2.23);
  dr2point a4 = { a2, a3 };
  Any a8 = recordToStr2( "x", a4.x, "y", a4.y);
  println ( a8 );
  return 0;
}
