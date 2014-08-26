#define LIBRARY_TESTING true

#include <stdio.h>
#include <stdbool.h>

#define STRINGMAX 10 // used in snprint functions
#define real float // can be changed to suit application
#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef int fr2nat;

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
  int a2 = 1;
  char * a6 = x1x_f ( a2 );
  printf ( "%s\n", a6 );
  return 0;
}
