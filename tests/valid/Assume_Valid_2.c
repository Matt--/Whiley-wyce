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
  char * a6 = "ASSUMPTION PASSED!";
  printf ( "%s\n", a6 );
  return 0;
}
