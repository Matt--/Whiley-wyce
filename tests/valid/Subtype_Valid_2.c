#define LIBRARY_TESTING true

#define STRINGMAX 10 // used in snprint functions
#include <stdio.h>
#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
#define real double // can be changed to suit application
typedef int sr7nat;


int main (){
  int a2 = 1;
  typedef struct {Any f; }Record3;
  Record3 a3 = { a2 };
  int a5 = a3.f;
  int a6 = 1;
  int a7 = a5 + a6;
  a3.f = a7;
  char * a11 = recordToStr1( "f", a3.f);
  printf ( "%s\n", a11 );
  return 0;
}
