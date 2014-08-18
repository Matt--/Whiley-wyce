#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef struct {Any x; Any y; } Point;

Point x1x_f ( Point  );

Point x1x_f ( Point a0 ){
  return a0;
}

int main (){
  Any a3 = Int(1);
  Any a4 = Int(1);
  Point a5 = { a3, a4 };
  Point a2 = x1x_f ( a5 );
  Any a9 = recordToStr2( "x", a2.x, "y", a2.y);
  println ( a9 );
  return 0;
}
