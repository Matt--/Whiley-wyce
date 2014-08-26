#define LIBRARY_TESTING true

#include <stdio.h>
#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
#define real double // can be changed to suit application
#define STRINGMAX 10 // used in snprint functions
typedef struct {Any x; Any y; } Point;

Point x1x_f ( Point  );

Point x1x_f ( Point a0 ){
  int a3 = Point.y;
  int a4 = Point.x;
  int a6 = 0;
  int a8 = 0;
  return a0;
}

int main (){
  int a3 = 1;
  int a4 = 1;
  Point a5 = { a3, a4 };
  int a8 = Point.y;
  int a9 = Point.x;
  int a11 = 0;
  int a13 = 0;
  Point a2 = x1x_f ( a5 );
  a9 = recordToStr2( "x", a2.x, "y", a2.y);
  printf ( "%i\n", a9 );
  return 0;
}
