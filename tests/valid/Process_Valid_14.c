#define LIBRARY_TESTING true

#include <stdio.h>
#include <stdbool.h>

#define STRINGMAX 10 // used in snprint functions
#define real float // can be changed to suit application
#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"

int main (){
  char * a4 = malloc(12 * sizeof(char));
  a4[0] = 'H';
  a4[1] = 'e';
  a4[2] = 'l';
  a4[3] = 'l';
  a4[4] = 'o';
  a4[5] = ' ';
  a4[6] = 'W';
  a4[7] = 'o';
  a4[8] = 'r';
  a4[9] = 'l';
  a4[10] = 'd';
  a4[11] = '\0';
  printf ( "%s\n", a4 );
  return 0;
}
