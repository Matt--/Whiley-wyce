#define LIBRARY_TESTING true

#include <stdio.h>
#include <stdbool.h>

#define STRINGMAX 10 // used in snprint functions
#define real float // can be changed to suit application
#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"

int main (){
  int a2 = 1;
  int a3 = 2;
  int a4 = 3;
  int* a5 = malloc(3 * sizeof(int));
  a5[0] = a2;
  a5[1] = a3;
  a5[2] = a4;
  int a7 = sizeof( a5 ) / sizeof( a5[0] );
  int a8 = 3;
  int a14 = 0;
  int a15 = a5[ a14 ];
  char * a9015 = calloc(STRINGMAX, sizeof(char));
  sprintf( a9015, "%d", a15 );
  char * a12 = calloc(STRINGMAX, sizeof(char));
  snprintf( a12, STRINGMAX, "%d", a15 );
  whileyPrecision( a12 );
  printf ( "%s\n", a12 );
  return 0;
}
