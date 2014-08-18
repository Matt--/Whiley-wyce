#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef struct {Any x; Any y; } Point;

Any x1x_f ( Any  );
Point x1x_Point ( Any , Any  );

Any x1x_f ( Any a0 ){
  return a0;
}

Point x1x_Point ( Any a0, Any a1 ){
  Any a2 = x1x_f ( a0 );
  Any a4 = x1x_f ( a1 );
  if ( dataAsInt( a2 ) == dataAsInt( a4 ) ) { goto label9; };
  Point a8 = { a0, a1 };
  Any a10 = a8.y;
  Any a11 = a8.x;
  return a8;
  label9: ;
  Any a9 = Int(1);
  a10 = Int(1);
  a11 = wyce_neg(a10);
  Point a12 = { a9, a11 };
  Any a14 = a12.y;
  Any a15 = a12.x;
  return a12;
}

int main (){
  Any a3 = Int(1);
  Any a4 = Int(1);
  Point a2 = x1x_Point ( a3, a4 );
  Any a8 = recordToStr2( "x", a2.x, "y", a2.y);
  println ( a8 );
  Any a11 = Int(1);
  Any a12 = Int(2);
  Point a10 = x1x_Point ( a11, a12 );
  a2 = a10;
  Any a16 = recordToStr2( "x", a2.x, "y", a2.y);
  println ( a16 );
  return 0;
}
