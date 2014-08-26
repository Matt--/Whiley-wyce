#define LIBRARY_TESTING true

#include <stdio.h>
#include <stdbool.h>

#define STRINGMAX 10 // used in snprint functions
#define real float // can be changed to suit application
#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
int x1x_f ( int  );
real x1x_g ( int (*)(int)  );

int x1x_f ( int a0 ){
  int a2 = 12;
  int a3 = a0 * a2;
  return a3;
}

real x1x_g ( int ( *a0 )(int) ){
  int a3 = 1;
  real a1 = a0( a3 );
  return a1;
}

int main (){
  int (*a6)(int) = &x1x_f;
  real a5 = x1x_g ( a6 );
  char * a9005 = calloc(STRINGMAX, sizeof(char));
  sprintf( a9005, "%f", a5 );
  char * a4 = calloc(STRINGMAX, sizeof(char));
  snprintf( a4, STRINGMAX, "%f", a5 );
  whileyPrecision( a4 );
  printf ( "%s\n", a4 );
  return 0;
}
