#define LIBRARY_TESTING true

#include <stdio.h>
#include <stdbool.h>

#define STRINGMAX 10 // used in snprint functions
#define real float // can be changed to suit application
#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef int nat;

int x1x_f ( int , int  );

int x1x_f ( int a0, int a1 ){
  goto label192;
  label192: ;
  int a7 = a0 / a1;
  goto label193;
  label193: ;
  return a7;
}

int main (){
  int a3 = 10;
  int a4 = 2;
  int a2 = x1x_f ( a3, a4 );
  char * a9002 = calloc(STRINGMAX, sizeof(char));
  sprintf( a9002, "%d", a2 );
  char * a8 = calloc(STRINGMAX, sizeof(char));
  snprintf( a8, STRINGMAX, "%d", a2 );
  whileyPrecision( a8 );
  printf ( "%s\n", a8 );
  return 0;
}
