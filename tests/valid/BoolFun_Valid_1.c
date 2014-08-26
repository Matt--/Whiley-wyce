#define LIBRARY_TESTING true

#include <stdio.h>
#include <stdbool.h>

#define STRINGMAX 10 // used in snprint functions
#define real float // can be changed to suit application
#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
char * x1x_f ( bool  );

char * x1x_f ( bool a0 ){
  char * a9000 = calloc(STRINGMAX, sizeof(char));
  sprintf( a9000, "%s", a0 ? "true" : "false" );
  char * a1 = calloc(STRINGMAX, sizeof(char));
  snprintf( a1, STRINGMAX, "%s", a0 ? "true" : "false");
  whileyPrecision( a1 );
  return a1;
}

int main (){
  bool a2 = true;
  char * a6 = x1x_f ( a2 );
  printf ( "%s\n", a6 );
  bool a8 = false;
  char * a12 = x1x_f ( a8 );
  printf ( "%s\n", a12 );
  return 0;
}
