#define LIBRARY_TESTING true

#include <stdio.h>
#include <stdbool.h>

#define STRINGMAX 10 // used in snprint functions
#define real float // can be changed to suit application
#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
int x1x_f ( int  );

int x1x_f ( int a0 ){
  int a2 = 10;
  if ( a0 >= a2 ) { goto label4; };
  int a3 = 1;
  return a3;
  label4: ;
  int a4 = 2;
  return a4;
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
  int a11 = x1x_f ( a12 );
  char * a9011 = calloc(STRINGMAX, sizeof(char));
  sprintf( a9011, "%d", a11 );
  char * a10 = calloc(STRINGMAX, sizeof(char));
  snprintf( a10, STRINGMAX, "%d", a11 );
  whileyPrecision( a10 );
  printf ( "%s\n", a10 );
  int a18 = 11;
  int a17 = x1x_f ( a18 );
  char * a9017 = calloc(STRINGMAX, sizeof(char));
  sprintf( a9017, "%d", a17 );
  char * a16 = calloc(STRINGMAX, sizeof(char));
  snprintf( a16, STRINGMAX, "%d", a17 );
  whileyPrecision( a16 );
  printf ( "%s\n", a16 );
  int a24 = 1212;
  int a23 = x1x_f ( a24 );
  char * a9023 = calloc(STRINGMAX, sizeof(char));
  sprintf( a9023, "%d", a23 );
  char * a22 = calloc(STRINGMAX, sizeof(char));
  snprintf( a22, STRINGMAX, "%d", a23 );
  whileyPrecision( a22 );
  printf ( "%s\n", a22 );
  int a30 = 1212;
  int a31 = -a30;
  int a29 = x1x_f ( a31 );
  char * a9029 = calloc(STRINGMAX, sizeof(char));
  sprintf( a9029, "%d", a29 );
  char * a28 = calloc(STRINGMAX, sizeof(char));
  snprintf( a28, STRINGMAX, "%d", a29 );
  whileyPrecision( a28 );
  printf ( "%s\n", a28 );
  return 0;
}
