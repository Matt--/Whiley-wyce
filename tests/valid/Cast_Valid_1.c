#define LIBRARY_TESTING true

#include <stdio.h>
#include <stdbool.h>

#define STRINGMAX 10 // used in snprint functions
#define real float // can be changed to suit application
#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef struct {Any x; } R1;

real x1x_f ( int  );

real x1x_f ( int a0 ){
  real a2 = (real)a0;
  return a2;
}

int main (){
  int a6 = 1;
  real a5 = x1x_f ( a6 );
  char * a9005 = calloc(STRINGMAX, sizeof(char));
  sprintf( a9005, "%f", a5 );
  char * a4 = calloc(STRINGMAX, sizeof(char));
  snprintf( a4, STRINGMAX, "%f", a5 );
  whileyPrecision( a4 );
  printf ( "%s\n", a4 );
  return 0;
}
