#define LIBRARY_TESTING true

#include <stdio.h>
#include <stdbool.h>

#define STRINGMAX 10 // used in snprint functions
#define real float // can be changed to suit application
#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
char * x1x_g ( int  );
char * x1x_f ( int  );

char * x1x_g ( int a0 ){
  char * a9000 = calloc(STRINGMAX, sizeof(char));
  sprintf( a9000, "%d", a0 );
  char * a3 = calloc(STRINGMAX, sizeof(char));
  snprintf( a3, STRINGMAX, "%d", a0 );
  whileyPrecision( a3 );
  return a3;
}

char * x1x_f ( int a0 ){
  int a5 = 1;
  int a6 = a0 + a5;
  char * a7 = x1x_g ( a6 );
  return a7;
}

int main (){
  int a5 = 1;
  char * a4 = x1x_f ( a5 );
  printf ( "%s\n", a4 );
  return 0;
}
