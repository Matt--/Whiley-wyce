#define LIBRARY_TESTING true

#include <stdio.h>
#include <stdbool.h>

#define STRINGMAX 10 // used in snprint functions
#define real float // can be changed to suit application
#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
int x1x_f ( int  );

int x1x_f ( int a0 ){
  int a2 = 0;
  if ( a0 >= a2 ) { goto label80; };
  int a3 = 0;
  return a3;
  label80: ;
  return a0;
}

int main (){
  int a6 = 1;
  int a5 = x1x_f ( a6 );
  char * a9005 = calloc(STRINGMAX, sizeof(char));
  sprintf( a9005, "%d", a5 );
  char * a4 = calloc(STRINGMAX, sizeof(char));
  snprintf( a4, STRINGMAX, "%d", a5 );
  whileyPrecision( a4 );
  printf ( "%s\n", a4 );
  return 0;
}
