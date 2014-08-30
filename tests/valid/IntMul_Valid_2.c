#define LIBRARY_TESTING true

#include <stdio.h>
#include <stdbool.h>

#define STRINGMAX 10 // used in snprint functions
#define real float // can be changed to suit application
#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"

int main (){
  int a2 = 8;
  int a4 = 1;
  int a9 = a2 - a4;
  int a10 = a2 * a9;
  char * a14 = "8 * 8 - 1 => ";
  char * a9010 = calloc(STRINGMAX, sizeof(char));
  sprintf( a9010, "%d", a10 );
  whileyPrecision( a9010 );
  ;
  char * a16 = calloc( strlen( a14 ) + strlen( a9010 ) +1, sizeof(char));
  strcat( a16, a14 );
  strcat( a16, a9010 );
  printf ( "%s\n", a16 );
  int a19 = a2 * a2;
  int a21 = a19 - a4;
  a10 = a21;
  char * a25 = "(8 * 8) - 1 => ";
  a9010 = calloc(STRINGMAX, sizeof(char));
  sprintf( a9010, "%d", a10 );
  whileyPrecision( a9010 );
  ;
  char * a27 = calloc( strlen( a25 ) + strlen( a9010 ) +1, sizeof(char));
  strcat( a27, a25 );
  strcat( a27, a9010 );
  printf ( "%s\n", a27 );
  int a31 = a2 - a4;
  int a32 = a2 * a31;
  a10 = a32;
  char * a36 = "8 * (8 - 1) => ";
  a9010 = calloc(STRINGMAX, sizeof(char));
  sprintf( a9010, "%d", a10 );
  whileyPrecision( a9010 );
  ;
  char * a38 = calloc( strlen( a36 ) + strlen( a9010 ) +1, sizeof(char));
  strcat( a38, a36 );
  strcat( a38, a9010 );
  printf ( "%s\n", a38 );
  return 0;
}
