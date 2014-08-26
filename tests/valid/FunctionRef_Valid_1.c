#define LIBRARY_TESTING true

#include <stdio.h>
#include <stdbool.h>

#define STRINGMAX 10 // used in snprint functions
#define real float // can be changed to suit application
#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef int(*func_t)(int);

int x1x_f1 ( int  );
int x1x_f2 ( int  );
int x1x_g ( int (*)(int)  );

int x1x_f1 ( int a0 ){
  int a2 = 1;
  int a3 = a0 + a2;
  return a3;
}

int x1x_f2 ( int a0 ){
  int a2 = 2;
  int a3 = a0 * a2;
  return a3;
}

int x1x_g ( int ( *a0 )(int) ){
  int a3 = 1234;
  int a1 = a0( a3 );
  return a1;
}

int main (){
  int (*a6)(int) = &x1x_f1;
  int a5 = x1x_g ( a6 );
  char * a9005 = calloc(STRINGMAX, sizeof(char));
  sprintf( a9005, "%d", a5 );
  char * a4 = calloc(STRINGMAX, sizeof(char));
  snprintf( a4, STRINGMAX, "%d", a5 );
  whileyPrecision( a4 );
  printf ( "%s\n", a4 );
  int (*a12)(int) = &x1x_f2;
  int a11 = x1x_g ( a12 );
  char * a9011 = calloc(STRINGMAX, sizeof(char));
  sprintf( a9011, "%d", a11 );
  char * a10 = calloc(STRINGMAX, sizeof(char));
  snprintf( a10, STRINGMAX, "%d", a11 );
  whileyPrecision( a10 );
  printf ( "%s\n", a10 );
  return 0;
}
