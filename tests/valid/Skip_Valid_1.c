#define LIBRARY_TESTING true

#include <stdio.h>
#include <stdbool.h>

#define STRINGMAX 10 // used in snprint functions
#define real float // can be changed to suit application
#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
int x1x_f ( int  );

int x1x_f ( int a0 ){
  int a2 = 0;
  if ( a0 <= a2 ) { goto label63; };
  goto label64;
  label63: ;
  int a3 = 1;
  int a4 = -a3;
  return a4;
  label64: ;
  return a0;
}

int main (){
  int a6 = 1;
  int a5 = x1x_f ( a6 );
  char * a9005 = calloc(STRINGMAX, sizeof(char));
  sprintf( a9005, "%d", a5 );
  char * a4 = calloc(STRINGMAX, sizeof(char));
  snprintf( a4, STRINGMAX, "%d", a5 );
  whileyPrecision( a4 );
  printf ( "%s\n", a4 );
  int a12 = 10;
  int a13 = -a12;
  int a11 = x1x_f ( a13 );
  char * a9011 = calloc(STRINGMAX, sizeof(char));
  sprintf( a9011, "%d", a11 );
  char * a10 = calloc(STRINGMAX, sizeof(char));
  snprintf( a10, STRINGMAX, "%d", a11 );
  whileyPrecision( a10 );
  printf ( "%s\n", a10 );
  return 0;
}
