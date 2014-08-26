#define LIBRARY_TESTING true

#define STRINGMAX 10 // used in snprint functions
#include <stdio.h>
#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
#define real double // can be changed to suit application
char * x1x_f ( int|real  );

char * x1x_f ( int|real a0 ){
  char * a1 = calloc(STRINGMAX, sizeof(char));
  snprintf( a1, STRINGMAX, "fail", a0 );
  whileyPrecision( a1 );
  return a1;
}

int main (){
  int a2 = 123;
  ;
  char * a6 = x1x_f ( a2 );
  printf ( "%s\n", a6 );
  real a8 = 1.234;
  a2 = a8;
  ;
  char * a12 = x1x_f ( a8 );
  printf ( "%s\n", a12 );
  return 0;
}
