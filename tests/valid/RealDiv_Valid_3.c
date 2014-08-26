#define LIBRARY_TESTING true

#include <stdio.h>
#include <stdbool.h>

#define STRINGMAX 10 // used in snprint functions
#define real float // can be changed to suit application
#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
real x1x_g ( int  );
char * x1x_f ( int , int  );

real x1x_g ( int a0 ){
  int a2 = 3;
  int a3 = a0 / a2;
  a3 = (real)a3;
  return a3;
}

char * x1x_f ( int a0, int a1 ){
  real a7 = x1x_g ( a0 );
  char * a9007 = calloc(STRINGMAX, sizeof(char));
  sprintf( a9007, "%f", a7 );
  char * a6 = calloc(STRINGMAX, sizeof(char));
  snprintf( a6, STRINGMAX, "%f", a7 );
  whileyPrecision( a6 );
  return a6;
}

int main (){
  int a5 = 1;
  int a6 = 2;
  char * a4 = x1x_f ( a5, a6 );
  printf ( "%s\n", a4 );
  return 0;
}
