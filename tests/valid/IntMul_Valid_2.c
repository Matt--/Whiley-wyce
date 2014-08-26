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
  char * a14 = malloc(14 * sizeof(char));
  a14[0] = '8';
  a14[1] = ' ';
  a14[2] = '*';
  a14[3] = ' ';
  a14[4] = '8';
  a14[5] = ' ';
  a14[6] = '-';
  a14[7] = ' ';
  a14[8] = '1';
  a14[9] = ' ';
  a14[10] = '=';
  a14[11] = '>';
  a14[12] = ' ';
  a14[13] = '\0';
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
  char * a25 = malloc(16 * sizeof(char));
  a25[0] = '(';
  a25[1] = '8';
  a25[2] = ' ';
  a25[3] = '*';
  a25[4] = ' ';
  a25[5] = '8';
  a25[6] = ')';
  a25[7] = ' ';
  a25[8] = '-';
  a25[9] = ' ';
  a25[10] = '1';
  a25[11] = ' ';
  a25[12] = '=';
  a25[13] = '>';
  a25[14] = ' ';
  a25[15] = '\0';
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
  char * a36 = malloc(16 * sizeof(char));
  a36[0] = '8';
  a36[1] = ' ';
  a36[2] = '*';
  a36[3] = ' ';
  a36[4] = '(';
  a36[5] = '8';
  a36[6] = ' ';
  a36[7] = '-';
  a36[8] = ' ';
  a36[9] = '1';
  a36[10] = ')';
  a36[11] = ' ';
  a36[12] = '=';
  a36[13] = '>';
  a36[14] = ' ';
  a36[15] = '\0';
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
