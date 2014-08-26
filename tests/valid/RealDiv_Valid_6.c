#define LIBRARY_TESTING true

#include <stdio.h>
#include <stdbool.h>

#define STRINGMAX 10 // used in snprint functions
#define real float // can be changed to suit application
#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
real x1x_g ( real  );

real x1x_g ( real a0 ){
  real a2 = 3;
  real a3 = a0 / a2;
  return a3;
}

int main (){
  real a6 = 0.234;
  real a5 = x1x_g ( a6 );
  char * a9005 = calloc(STRINGMAX, sizeof(char));
  sprintf( a9005, "%f", a5 );
  char * a4 = calloc(STRINGMAX, sizeof(char));
  snprintf( a4, STRINGMAX, "%f", a5 );
  whileyPrecision( a4 );
  printf ( "%s\n", a4 );
  return 0;
}
