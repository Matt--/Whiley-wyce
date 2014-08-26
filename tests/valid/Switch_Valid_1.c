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
    case 1 : goto label168;
    case -1 : goto label169;
    default : goto label167;
  }
  label168: ;
  int a3 = 1;
  int a4 = a0 - a3;
  return a4;
  label169: ;
  int a6 = 1;
  int a7 = a0 + a6;
  return a7;
  label167: ;
  int a8 = 1;
  return a8;
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
  int a24 = 1;
  int a25 = -a24;
  int a23 = x1x_f ( a25 );
  char * a9023 = calloc(STRINGMAX, sizeof(char));
  sprintf( a9023, "%d", a23 );
  char * a22 = calloc(STRINGMAX, sizeof(char));
  snprintf( a22, STRINGMAX, "%d", a23 );
  whileyPrecision( a22 );
  printf ( "%s\n", a22 );
  int a31 = 2;
  int a32 = -a31;
  int a30 = x1x_f ( a32 );
  char * a9030 = calloc(STRINGMAX, sizeof(char));
  sprintf( a9030, "%d", a30 );
  char * a29 = calloc(STRINGMAX, sizeof(char));
  snprintf( a29, STRINGMAX, "%d", a30 );
  whileyPrecision( a29 );
  printf ( "%s\n", a29 );
  return 0;
}
