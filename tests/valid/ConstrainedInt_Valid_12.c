#define LIBRARY_TESTING true

#include <stdio.h>
#include <stdbool.h>

#define STRINGMAX 10 // used in snprint functions
#define real float // can be changed to suit application
#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef int cr1nat;

char * x1x_f ( int  );

char * x1x_f ( int a0 ){
  char * a9000 = calloc(STRINGMAX, sizeof(char));
  sprintf( a9000, "%d", a0 );
  char * a3 = calloc(STRINGMAX, sizeof(char));
  snprintf( a3, STRINGMAX, "%d", a0 );
  whileyPrecision( a3 );
  return a3;
}

int main (){
  int a5 = 9;
  char * a4 = x1x_f ( a5 );
  printf ( "%s\n", a4 );
  return 0;
}
