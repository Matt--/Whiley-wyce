#define LIBRARY_TESTING true

#define STRINGMAX 10 // used in snprint functions
#include <stdio.h>
#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
#define real double // can be changed to suit application
int x1x_f ( char *  );

int x1x_f ( char * a0 ){
  ;
  return a0;
}

int main (){
  static char a6[] = "Hello World";
  !(null|int) !(null|int) a105 = x1x_f ( a6 );
  char * a4 = calloc(STRINGMAX, sizeof(char));
  snprintf( a4, STRINGMAX, "fail", a105 );
  whileyPrecision( a4 );
  printf ( "%s\n", a4 );
  return 0;
}
