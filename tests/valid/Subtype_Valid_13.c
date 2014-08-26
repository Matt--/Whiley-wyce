#define LIBRARY_TESTING true

#define STRINGMAX 10 // used in snprint functions
#include <stdio.h>
#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
#define real double // can be changed to suit application
typedef int sr6nat;
typedef struct {Any f; Any g; } sr6tup;


int main (){
  int a2 = 1;
  int a3 = 5;
  sr6tup a4 = { a2, a3 };
  int a5 = 2;
  a4.f = int;
  char * a9 = recordToStr2( "f", a4.f, "g", a4.g);
  printf ( "%s\n", a9 );
  return 0;
}
