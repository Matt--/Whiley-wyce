#define LIBRARY_TESTING true

#include <stdio.h>
#include <stdbool.h>

#define STRINGMAX 10 // used in snprint functions
#define real float // can be changed to suit application
#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"

int main (){
  int a2 = 1;
  int a4 = 2;
  int a10 = a2 + a4;
  char * a9010 = calloc(STRINGMAX, sizeof(char));
  sprintf( a9010, "%d", a10 );
  printf ( "%i\n", a10 );
  return 0;
}
