#define LIBRARY_TESTING true

#include <stdio.h>
#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
#define real double // can be changed to suit application
#define STRINGMAX 10 // used in snprint functions
typedef struct {Any x; Any y; } Point;

int x1x_f ( int  );
Point x1x_Point ( int , int  );

int x1x_f ( int a0 ){
  return a0;
}

Point x1x_Point ( int a0, int a1 ){
  int a2 = x1x_f ( a0 );
  int a4 = x1x_f ( a1 );
  if ( a2 == a4 ) { goto label5; };
  Point a8 = { a0, a1 };
  int a10 = Point.y;
  int a11 = Point.x;
  return a8;
  label5: ;
  int a9 = 1;
  a10 = 1;
  a11 =  -a10;
  Point a12 = { a9, a11 };
  int a14 = Point.y;
  int a15 = Point.x;
  return a12;
}

int main (){
  int a3 = 1;
  int a4 = 1;
  Point a2 = x1x_Point ( a3, a4 );
  char * a8 = recordToStr2( "x", a2.x, "y", a2.y);
  printf ( "%s\n", a8 );
  int a11 = 1;
  int a12 = 2;
  Point a10 = x1x_Point ( a11, a12 );
  a2 = a10;
  char * a16 = recordToStr2( "x", a10.x, "y", a10.y);
  printf ( "%s\n", a16 );
  return 0;
}
