#define LIBRARY_TESTING true

#include <stdio.h>
#include <stdbool.h>

#define STRINGMAX 10 // used in snprint functions
#define real float // can be changed to suit application
#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
int x1x_f ( int  );

int x1x_f ( int a0 ){
  int a2 = 1;
  int a3 = a0 + a2;
  return a3;
}

int main (){
  int a3 = 10;
  int a2 = x1x_f ( a3 );
  char * a9002 = calloc(STRINGMAX, sizeof(char));
  sprintf( a9002, "%d", a2 );
  char * a7 = calloc(STRINGMAX, sizeof(char));
  snprintf( a7, STRINGMAX, "%d", a2 );
  whileyPrecision( a7 );
  printf ( "%s\n", a7 );
  return 0;
}
