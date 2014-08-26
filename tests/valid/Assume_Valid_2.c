#define LIBRARY_TESTING true

#include <stdio.h>
#include <stdbool.h>

#define STRINGMAX 10 // used in snprint functions
#define real float // can be changed to suit application
#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"

int main (){
  int a1 = 1;
  int a2 = 1;
  char * a6 = malloc(19 * sizeof(char));
  a6[0] = 'A';
  a6[1] = 'S';
  a6[2] = 'S';
  a6[3] = 'U';
  a6[4] = 'M';
  a6[5] = 'P';
  a6[6] = 'T';
  a6[7] = 'I';
  a6[8] = 'O';
  a6[9] = 'N';
  a6[10] = ' ';
  a6[11] = 'P';
  a6[12] = 'A';
  a6[13] = 'S';
  a6[14] = 'S';
  a6[15] = 'E';
  a6[16] = 'D';
  a6[17] = '!';
  a6[18] = '\0';
  printf ( "%s\n", a6 );
  return 0;
}
