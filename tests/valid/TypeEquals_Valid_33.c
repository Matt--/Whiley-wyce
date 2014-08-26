#define LIBRARY_TESTING true

#include <stdio.h>
#include <stdbool.h>

#define STRINGMAX 10 // used in snprint functions
#define real float // can be changed to suit application
#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef int pos;
typedef int neg;
typedef int expr;

char * x1x_f ( int  );

char * x1x_f ( int a0 ){
  int a2 = 0;
  if ( a0 <= a2 ) { goto label60; };
  goto label61;
  label60: ;
  goto label62;
  label61: ;
  char * a1 = malloc(11 * sizeof(char));
  a1[0] = 'P';
  a1[1] = 'O';
  a1[2] = 'S';
  a1[3] = 'I';
  a1[4] = 'T';
  a1[5] = 'I';
  a1[6] = 'V';
  a1[7] = 'E';
  a1[8] = ':';
  a1[9] = ' ';
  a1[10] = '\0';
  char * a9000 = calloc(STRINGMAX, sizeof(char));
  sprintf( a9000, "%d", a0 );
  char * a9002 = calloc(STRINGMAX, sizeof(char));
  snprintf( a9002, STRINGMAX, "%d", a0 );
  whileyPrecision( a9002 );
  char * a4 = calloc( strlen( a1 ) + strlen( a9002 ) +1, sizeof(char));
  strcat( a4, a1 );
  strcat( a4, a9002 );
  return a4;
  label62: ;
  char * a5 = malloc(11 * sizeof(char));
  a5[0] = 'N';
  a5[1] = 'E';
  a5[2] = 'G';
  a5[3] = 'A';
  a5[4] = 'T';
  a5[5] = 'I';
  a5[6] = 'V';
  a5[7] = 'E';
  a5[8] = ':';
  a5[9] = ' ';
  a5[10] = '\0';
  a9000 = calloc(STRINGMAX, sizeof(char));
  sprintf( a9000, "%d", a0 );
  char * a6 = calloc(STRINGMAX, sizeof(char));
  snprintf( a6, STRINGMAX, "%d", a0 );
  whileyPrecision( a6 );
  char * a8 = calloc( strlen( a5 ) + strlen( a6 ) +1, sizeof(char));
  strcat( a8, a5 );
  strcat( a8, a6 );
  return a8;
}

int main (){
  int a5 = 1;
  int a6 = -a5;
  char * a4 = x1x_f ( a6 );
  printf ( "%s\n", a4 );
  int a11 = 1;
  char * a10 = x1x_f ( a11 );
  printf ( "%s\n", a10 );
  int a16 = 1234;
  char * a15 = x1x_f ( a16 );
  printf ( "%s\n", a15 );
  return 0;
}
