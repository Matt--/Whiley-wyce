#define LIBRARY_TESTING true

#include <stdio.h>
#include <stdbool.h>

#define STRINGMAX 10 // used in snprint functions
#define real float // can be changed to suit application
#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef int nat;

int x1x_abs ( int  );
int x1x_nop ( int  );

int x1x_abs ( int a0 ){
  int a1 = abs ( a0 );;
  return a1;
}

int x1x_nop ( int a0 ){
  int a1 = abs ( a0 );;
  return a1;
}

int main (){
  int a3 = 123;
  int a4 = -a3;
  int a2 = x1x_abs ( a4 );
  char * a9002 = calloc(STRINGMAX, sizeof(char));
  sprintf( a9002, "%d", a2 );
  char * a8 = calloc(STRINGMAX, sizeof(char));
  snprintf( a8, STRINGMAX, "%d", a2 );
  whileyPrecision( a8 );
  printf ( "%s\n", a8 );
  int a11 = 1;
  int a10 = x1x_nop ( a11 );
  a2 = a10;
  a9002 = calloc(STRINGMAX, sizeof(char));
  sprintf( a9002, "%d", a2 );
  char * a15 = calloc(STRINGMAX, sizeof(char));
  snprintf( a15, STRINGMAX, "%d", a2 );
  whileyPrecision( a15 );
  printf ( "%s\n", a15 );
  return 0;
}
