#define LIBRARY_TESTING true

#include <stdio.h>
#include <stdbool.h>

#define STRINGMAX 10 // used in snprint functions
#define real float // can be changed to suit application
#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
int x1x_f ( int  );

int x1x_f ( int a0 ){
  switch( a0 ){
    case 1 : goto label181;
    case 2 : goto label182;
    default : goto label180;
  }
  label181: ;
  int a2 = 0;
  return a2;
  label182: ;
  int a3 = 1;
  int a4 = -a3;
  return a4;
  label180: ;
  int a5 = 10;
  return a5;
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
  int a12 = 2;
  int a11 = x1x_f ( a12 );
  char * a9011 = calloc(STRINGMAX, sizeof(char));
  sprintf( a9011, "%d", a11 );
  char * a10 = calloc(STRINGMAX, sizeof(char));
  snprintf( a10, STRINGMAX, "%d", a11 );
  whileyPrecision( a10 );
  printf ( "%s\n", a10 );
  int a18 = 3;
  int a17 = x1x_f ( a18 );
  char * a9017 = calloc(STRINGMAX, sizeof(char));
  sprintf( a9017, "%d", a17 );
  char * a16 = calloc(STRINGMAX, sizeof(char));
  snprintf( a16, STRINGMAX, "%d", a17 );
  whileyPrecision( a16 );
  printf ( "%s\n", a16 );
  int a24 = 1;
  int a25 = -a24;
  int a23 = x1x_f ( a25 );
  char * a9023 = calloc(STRINGMAX, sizeof(char));
  sprintf( a9023, "%d", a23 );
  char * a22 = calloc(STRINGMAX, sizeof(char));
  snprintf( a22, STRINGMAX, "%d", a23 );
  whileyPrecision( a22 );
  printf ( "%s\n", a22 );
  return 0;
}
