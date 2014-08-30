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
  char * a1 = "POSITIVE: ";
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
  char * a5 = "NEGATIVE: ";
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
