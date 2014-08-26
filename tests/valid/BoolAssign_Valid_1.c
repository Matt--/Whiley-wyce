#define LIBRARY_TESTING true

#include <stdio.h>
#include <stdbool.h>

#define STRINGMAX 10 // used in snprint functions
#define real float // can be changed to suit application
#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"

int main (){
  bool a2 = true;
  char * a9002 = calloc(STRINGMAX, sizeof(char));
  sprintf( a9002, "%s", a2 ? "true" : "false" );
  printf ( "%s\n", a2 ? "true" : "false");
  bool a7 = false;
  a2 = a7;
  a9002 = calloc(STRINGMAX, sizeof(char));
  sprintf( a9002, "%s", a2 ? "true" : "false" );
  printf ( "%s\n", a2 ? "true" : "false");
  return 0;
}
