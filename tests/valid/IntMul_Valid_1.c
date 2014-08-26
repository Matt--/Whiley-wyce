#define LIBRARY_TESTING true

#include <stdio.h>
#include <stdbool.h>

#define STRINGMAX 10 // used in snprint functions
#define real float // can be changed to suit application
#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"

int main (){
  int a2 = 2;
  int a3 = 3;
  int a4 = a2 * a3;
  int a5 = 1;
  int a6 = a4 + a5;
  char * a9006 = calloc(STRINGMAX, sizeof(char));
  sprintf( a9006, "%d", a6 );
  char * a10 = calloc(STRINGMAX, sizeof(char));
  snprintf( a10, STRINGMAX, "%d", a6 );
  whileyPrecision( a10 );
  printf ( "%s\n", a10 );
  return 0;
}
