#define LIBRARY_TESTING true

#define STRINGMAX 10 // used in snprint functions
#include <stdio.h>
#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
#define real double // can be changed to suit application
char * x1x_f ( [int][]  );

char * x1x_f ( [int] a0[] ){
  int a3 = sizeof( a0 ) / sizeof( a0[0] );
  char * a1 = calloc(STRINGMAX, sizeof(char));
  snprintf( a1, STRINGMAX, "%d", a3 );
  whileyPrecision( a1 );
  return a1;
}

int main (){
  [void] a7 = [];
  ;
  char * a6 = x1x_f ( a7 );
  printf ( "%s\n", a6 );
  return 0;
}
