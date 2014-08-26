#define LIBRARY_TESTING true

#include <stdio.h>
#include <stdbool.h>

#define STRINGMAX 10 // used in snprint functions
#define real float // can be changed to suit application
#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef int anat;
typedef int bnat;

int x1x_atob ( int  );
int x1x_btoa ( int  );

int x1x_atob ( int a0 ){
  return a0;
}

int x1x_btoa ( int a0 ){
  return a0;
}

int main (){
  int a2 = 1;
  int a7 = x1x_atob ( a2 );
  char * a9007 = calloc(STRINGMAX, sizeof(char));
  sprintf( a9007, "%d", a7 );
  char * a6 = calloc(STRINGMAX, sizeof(char));
  snprintf( a6, STRINGMAX, "%d", a7 );
  whileyPrecision( a6 );
  printf ( "%s\n", a6 );
  int a13 = x1x_btoa ( a2 );
  char * a9013 = calloc(STRINGMAX, sizeof(char));
  sprintf( a9013, "%d", a13 );
  char * a12 = calloc(STRINGMAX, sizeof(char));
  snprintf( a12, STRINGMAX, "%d", a13 );
  whileyPrecision( a12 );
  printf ( "%s\n", a12 );
  return 0;
}
