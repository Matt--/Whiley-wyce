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
  char * a4 = malloc(8 * sizeof(char));
  a4[0] = 'F';
  a4[1] = 'I';
  a4[2] = 'R';
  a4[3] = 'S';
  a4[4] = 'T';
  a4[5] = ':';
  a4[6] = ' ';
  a4[7] = '\0';
  int a6 = 1;
  char * a5 = x1x_f ( a6 );
  char * a7 = calloc( strlen( a4 ) + strlen( a5 ) +1, sizeof(char));
  strcat( a7, a4 );
  strcat( a7, a5 );
  printf ( "%s\n", a7 );
  char * a11 = malloc(9 * sizeof(char));
  a11[0] = 'S';
  a11[1] = 'E';
  a11[2] = 'C';
  a11[3] = 'O';
  a11[4] = 'N';
  a11[5] = 'D';
  a11[6] = ':';
  a11[7] = ' ';
  a11[8] = '\0';
  real a13 = 1.2344;
  char * a12 = x1x_g ( a13 );
  char * a14 = calloc( strlen( a11 ) + strlen( a12 ) +1, sizeof(char));
  strcat( a14, a11 );
  strcat( a14, a12 );
  printf ( "%s\n", a14 );
  return 0;
}
