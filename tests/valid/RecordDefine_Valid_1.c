#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef struct {Any x; Any y; } Point;

Point x1x_f ( Point  );

Point x1x_f ( Point a0 ){
  Any a3 = a0.y;
  Any a4 = a0.x;
  Any a6 = Int(0);
  Any a8 = Int(0);
  return a0;
}

int main (){
  Any a3 = Int(1);
  Any a4 = Int(1);
  Point a5 = { a3, a4 };
  Any a8 = a5.y;
  Any a9 = a5.x;
  Any a11 = Int(0);
  Any a13 = Int(0);
  Point a2 = x1x_f ( a5 );
  a9 = recordToStr2( "x", a2.x, "y", a2.y);
  println ( a9 );
  return 0;
}
