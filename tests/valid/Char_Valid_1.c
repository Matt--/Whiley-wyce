#define LIBRARY_TESTING true

#include <stdio.h>
#include <stdbool.h>

#define STRINGMAX 10 // used in snprint functions
#define real float // can be changed to suit application
#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
char * x1x_f ( char * , char  );

char * x1x_f ( char * a0, char a1 ){
  char * a4 = calloc( strlen( a0 ) + 1 +1, sizeof(char));
  strcat ( a4, a0 );
  a4[ strlen( a0 ) ] = a1;
  a4[ strlen( a0 ) +1 ] = '\0';
  return a4;
}

int main (){
  char * a5 = malloc(11 * sizeof(char));
  a5[0] = 'H';
  a5[1] = 'e';
  a5[2] = 'l';
  a5[3] = 'l';
  a5[4] = 'o';
  a5[5] = ' ';
  a5[6] = 'W';
  a5[7] = 'o';
  a5[8] = 'r';
  a5[9] = 'l';
  a5[10] = '\0';
  char a6 = 'd';
  char * a4 = x1x_f ( a5, a6 );
  printf ( "%s\n", a4 );
  return 0;
}
