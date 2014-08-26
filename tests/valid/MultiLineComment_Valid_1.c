#define LIBRARY_TESTING true

#include <stdio.h>
#include <stdbool.h>

#define STRINGMAX 10 // used in snprint functions
#define real float // can be changed to suit application
#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"

int main (){
  int a4 = 5;
  char * a9004 = calloc(STRINGMAX, sizeof(char));
  sprintf( a9004, "%d", a4 );
  printf ( "%i\n", a4 );
  return 0;
}
