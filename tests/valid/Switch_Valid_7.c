#define LIBRARY_TESTING true

#include <stdio.h>
#include <stdbool.h>

#define STRINGMAX 10 // used in snprint functions
#define real float // can be changed to suit application
#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef int nat;

int x1x_f ( int  );

int x1x_f ( int a0 ){
  switch( a0 ){
    case 1 : goto label185;
    default : goto label184;
  }
  label185: ;
  int a4 = 1;
  return a4;
  label184: ;
  int a5 = 0;
  return a5;
}

int main (){
  int a6 = 2;
  int a5 = x1x_f ( a6 );
  char * a9005 = calloc(STRINGMAX, sizeof(char));
  sprintf( a9005, "%d", a5 );
  char * a4 = calloc(STRINGMAX, sizeof(char));
  snprintf( a4, STRINGMAX, "%d", a5 );
  whileyPrecision( a4 );
  printf ( "%s\n", a4 );
  int a12 = 1;
  int a11 = x1x_f ( a12 );
  char * a9011 = calloc(STRINGMAX, sizeof(char));
  sprintf( a9011, "%d", a11 );
  char * a10 = calloc(STRINGMAX, sizeof(char));
  snprintf( a10, STRINGMAX, "%d", a11 );
  whileyPrecision( a10 );
  printf ( "%s\n", a10 );
  int a18 = 0;
  int a17 = x1x_f ( a18 );
  char * a9017 = calloc(STRINGMAX, sizeof(char));
  sprintf( a9017, "%d", a17 );
  char * a16 = calloc(STRINGMAX, sizeof(char));
  snprintf( a16, STRINGMAX, "%d", a17 );
  whileyPrecision( a16 );
  printf ( "%s\n", a16 );
  return 0;
}
