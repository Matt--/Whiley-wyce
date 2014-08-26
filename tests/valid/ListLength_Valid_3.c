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
  int a7 = 0;
  int a8 = a5[ a7 ];
  int a10 = sizeof( a5 ) / sizeof( a5[0] );
  int a12 = 1;
  int a13 = a5[ a12 ];
  int a15 = sizeof( a5 ) / sizeof( a5[0] );
  int a17 = 2;
  int a18 = a5[ a17 ];
  int a20 = sizeof( a5 ) / sizeof( a5[0] );
  int a26 = 0;
  int a27 = a5[ a26 ];
  char * a9027 = calloc(STRINGMAX, sizeof(char));
  sprintf( a9027, "%d", a27 );
  char * a24 = calloc(STRINGMAX, sizeof(char));
  snprintf( a24, STRINGMAX, "%d", a27 );
  whileyPrecision( a24 );
  printf ( "%s\n", a24 );
  return 0;
}
