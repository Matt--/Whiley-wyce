#define LIBRARY_TESTING true

#include <stdio.h>
#include <stdbool.h>

#define STRINGMAX 10 // used in snprint functions
#define real float // can be changed to suit application
#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"

int main (){
  char * a4 = "Hello: ";
  char * a5 = "1223344566";
  char * a6 = calloc( strlen( a4 ) + strlen( a5 ) +1, sizeof(char));
  strcat( a6, a4 );
  strcat( a6, a5 );
  printf ( "%s\n", a6 );
  return 0;
}
