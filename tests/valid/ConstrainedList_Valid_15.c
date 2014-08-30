#define LIBRARY_TESTING true

#include <stdio.h>
#include <stdbool.h>

#define STRINGMAX 10 // used in snprint functions
#define real float // can be changed to suit application
#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
char * x1x_f ( void );

char * x1x_f (void){
  char * a0 = "";
  return a0;
}

int main (){
  char * a4 = x1x_f (  );
  printf ( "%s\n", a4 );
  return 0;
}
