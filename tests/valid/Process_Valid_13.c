#define LIBRARY_TESTING true

#include <stdio.h>
#include <stdbool.h>

#define STRINGMAX 10 // used in snprint functions
#define real float // can be changed to suit application
#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"

int main (){
  char * a6 = malloc(9 * sizeof(char));
  a6[0] = 'G';
  a6[1] = 'O';
  a6[2] = 'T';
  a6[3] = ' ';
  a6[4] = 'H';
  a6[5] = 'E';
  a6[6] = 'R';
  a6[7] = 'E';
  a6[8] = '\0';
  printf ( "%s\n", a6 );
  return 0;
}
