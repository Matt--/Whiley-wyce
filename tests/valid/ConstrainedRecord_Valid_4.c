#define LIBRARY_TESTING true

#define STRINGMAX 10 // used in snprint functions
#include <stdio.h>
#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
#define real double // can be changed to suit application
typedef struct {Any x; Any y; } point;


int main (){
  int a2 = 1;
  int a3 = 1;
  point a4 = { a2, a3 };
  char * a8 = recordToStr2( "x", a4.x, "y", a4.y);
  printf ( "%s\n", a8 );
  return 0;
}
