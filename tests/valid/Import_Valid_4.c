#define LIBRARY_TESTING true

#include <stdio.h>
#include <stdbool.h>

#define STRINGMAX 10 // used in snprint functions
#define real float // can be changed to suit application
#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
char * x1x_f ( int  );
char * x1x_g ( real  );

char * x1x_f ( int a0 ){
  char * a1 = calloc(STRINGMAX, sizeof(char));
  snprintf( a1, STRINGMAX, "%d", a0 );
  whileyPrecision( a1 );
  return a1;
}

char * x1x_g ( real a0 ){
  char * a1 = calloc(STRINGMAX, sizeof(char));
  snprintf( a1, STRINGMAX, "%f", a0 );
  whileyPrecision( a1 );
  return a1;
}

int main (){
  char * a4 = "FIRST: ";
  int a6 = 1;
  char * a5 = x1x_f ( a6 );
  char * a7 = calloc( strlen( a4 ) + strlen( a5 ) +1, sizeof(char));
  strcat( a7, a4 );
  strcat( a7, a5 );
  printf ( "%s\n", a7 );
  char * a11 = "SECOND: ";
  real a13 = 1.2344;
  char * a12 = x1x_g ( a13 );
  char * a14 = calloc( strlen( a11 ) + strlen( a12 ) +1, sizeof(char));
  strcat( a14, a11 );
  strcat( a14, a12 );
  printf ( "%s\n", a14 );
  return 0;
}
