#define LIBRARY_TESTING true

#include <stdio.h>
#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
#define real double // can be changed to suit application
#define STRINGMAX 10 // used in snprint functions
typedef struct {Any x; Any y; } Point;

Point x1x_f ( Point  );

Point x1x_f ( Point a0 ){
  return a0;
}

int main (){
  int a3 = 1;
  int a4 = 1;
  Point a5 = { a3, a4 };
  Point a2 = x1x_f ( a5 );
  char * a9 = recordToStr2( "x", a2.x, "y", a2.y);
  printf ( "%s\n", a9 );
  return 0;
}
