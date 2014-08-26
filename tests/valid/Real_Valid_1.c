#define LIBRARY_TESTING true

#include <stdio.h>
#include <stdbool.h>

#define STRINGMAX 10 // used in snprint functions
#define real float // can be changed to suit application
#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"

int main (){
  real a2 = 1.20;
  real a4 = 2.40;
  real a10 = a2 + a4;
  char * a9010 = calloc(STRINGMAX, sizeof(char));
  sprintf( a9010, "%f", a10 );
  char a985468[STRINGMAX];
  snprintf( a985468, STRINGMAX, "%f", a10 );
  whileyPrecision( a985468 );
  printf("%s\n", a985468);
  real a16 = a4 - a2;
  char * a9016 = calloc(STRINGMAX, sizeof(char));
  sprintf( a9016, "%f", a16 );
  snprintf( a985468, STRINGMAX, "%f", a16 );
  whileyPrecision( a985468 );
  printf("%s\n", a985468);
  real a22 = a2 / a4;
  char * a9022 = calloc(STRINGMAX, sizeof(char));
  sprintf( a9022, "%f", a22 );
  snprintf( a985468, STRINGMAX, "%f", a22 );
  whileyPrecision( a985468 );
  printf("%s\n", a985468);
  real a28 = a2 * a4;
  char * a9028 = calloc(STRINGMAX, sizeof(char));
  sprintf( a9028, "%f", a28 );
  snprintf( a985468, STRINGMAX, "%f", a28 );
  whileyPrecision( a985468 );
  printf("%s\n", a985468);
  return 0;
}
