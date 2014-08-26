#define LIBRARY_TESTING true

#include <stdio.h>
#include <stdbool.h>

#define STRINGMAX 10 // used in snprint functions
#define real float // can be changed to suit application
#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"

int main (){
  int a2 = 1;
  char * a9002 = calloc(STRINGMAX, sizeof(char));
  sprintf( a9002, "%d", a2 );
  char * a6 = calloc(STRINGMAX, sizeof(char));
  snprintf( a6, STRINGMAX, "%d", a2 );
  whileyPrecision( a6 );
  printf ( "%s\n", a6 );
  return 0;
}
