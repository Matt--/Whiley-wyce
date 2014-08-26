#define LIBRARY_TESTING true

#define STRINGMAX 10 // used in snprint functions
#include <stdio.h>
#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
#define real double // can be changed to suit application

int main (){
  int a2 = 2;
  int a3 = 3;
  typedef struct {Any f1; Any f2; }Record4;
  Record4 a4 = { a2, a3 };
  int a6 = 1;
  int a7 = 3;
  Record4 a8 = { a6, a7 };
  char * a12 = recordToStr2( "f1", a4.f1, "f2", a4.f2);
  printf ( "%s\n", a12 );
  char * a17 = recordToStr2( "f1", a8.f1, "f2", a8.f2);
  printf ( "%s\n", a17 );
  int a21 = 1;
  a4.f1 = int;
  char * a25 = recordToStr2( "f1", a4.f1, "f2", a4.f2);
  printf ( "%s\n", a25 );
  char * a30 = recordToStr2( "f1", a8.f1, "f2", a8.f2);
  printf ( "%s\n", a30 );
  return 0;
}
