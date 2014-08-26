#define LIBRARY_TESTING true

#include <stdio.h>
#include <stdbool.h>

#define STRINGMAX 10 // used in snprint functions
#define real float // can be changed to suit application
#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"

int main (){
  char * a4 = malloc(8 * sizeof(char));
  a4[0] = 'H';
  a4[1] = 'e';
  a4[2] = 'l';
  a4[3] = 'l';
  a4[4] = 'o';
  a4[5] = ':';
  a4[6] = ' ';
  a4[7] = '\0';
  char * a5 = malloc(11 * sizeof(char));
  a5[0] = '1';
  a5[1] = '2';
  a5[2] = '2';
  a5[3] = '3';
  a5[4] = '3';
  a5[5] = '4';
  a5[6] = '4';
  a5[7] = '5';
  a5[8] = '6';
  a5[9] = '6';
  a5[10] = '\0';
  char * a6 = calloc( strlen( a4 ) + strlen( a5 ) +1, sizeof(char));
  strcat( a6, a4 );
  strcat( a6, a5 );
  printf ( "%s\n", a6 );
  return 0;
}
