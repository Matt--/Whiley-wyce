#define LIBRARY_TESTING true

#include <stdio.h>
#include <stdbool.h>

#define STRINGMAX 10 // used in snprint functions
#define real float // can be changed to suit application
#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
const double out = 123.456 ;


int main (){
  char * a4 = "Hello World";
  printf ( "%s\n", a4 );
  return 0;
}
