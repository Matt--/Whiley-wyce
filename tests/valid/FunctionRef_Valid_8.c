#define LIBRARY_TESTING true

#include <stdio.h>
#include <stdbool.h>

#define STRINGMAX 10 // used in snprint functions
#define real float // can be changed to suit application
#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
int x1x_read ( int  );
int x1x_id ( int  );
int x1x_test ( int (*)(int) , int  );

int x1x_read ( int a0 ){
  int a2 = -a0;
  return a2;
}

int x1x_id ( int a0 ){
  return a0;
}

int x1x_test ( int ( *a0 )(int), int a1 ){
  int a2 = a0( a1 );
  return a2;
}

int main (){
  int (*a3)(int) = &x1x_id;
  int a4 = 1;
  int a2 = x1x_test ( a3, a4 );
  char * a9002 = calloc(STRINGMAX, sizeof(char));
  sprintf( a9002, "%d", a2 );
  char * a8 = calloc(STRINGMAX, sizeof(char));
  snprintf( a8, STRINGMAX, "%d", a2 );
  whileyPrecision( a8 );
  printf ( "%s\n", a8 );
  int (*a11)(int) = &x1x_id;
  int a12 = 123;
  int a10 = x1x_test ( a11, a12 );
  a2 = a10;
  a9002 = calloc(STRINGMAX, sizeof(char));
  sprintf( a9002, "%d", a2 );
  char * a16 = calloc(STRINGMAX, sizeof(char));
  snprintf( a16, STRINGMAX, "%d", a2 );
  whileyPrecision( a16 );
  printf ( "%s\n", a16 );
  int (*a19)(int) = &x1x_id;
  int a20 = 223;
  int a18 = x1x_test ( a19, a20 );
  a2 = a18;
  a9002 = calloc(STRINGMAX, sizeof(char));
  sprintf( a9002, "%d", a2 );
  char * a24 = calloc(STRINGMAX, sizeof(char));
  snprintf( a24, STRINGMAX, "%d", a2 );
  whileyPrecision( a24 );
  printf ( "%s\n", a24 );
  return 0;
}
