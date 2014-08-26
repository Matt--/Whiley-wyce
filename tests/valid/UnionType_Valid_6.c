#define LIBRARY_TESTING true

#include <stdio.h>
#include <stdbool.h>

#define STRINGMAX 10 // used in snprint functions
#define real float // can be changed to suit application
#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef int ur4nat;
typedef int tur4nat;
typedef int wur4nat;

char * x1x_f ( int  );

char * x1x_f ( int a0 ){
  char * a9000 = calloc(STRINGMAX, sizeof(char));
  sprintf( a9000, "%d", a0 );
  char * a1 = calloc(STRINGMAX, sizeof(char));
  snprintf( a1, STRINGMAX, "%d", a0 );
  whileyPrecision( a1 );
  return a1;
}

int main (){
  int a5 = 1;
  char * a4 = x1x_f ( a5 );
  printf ( "%s\n", a4 );
  return 0;
}
