#define LIBRARY_TESTING true

#include <stdio.h>
#include <stdbool.h>

#define STRINGMAX 10 // used in snprint functions
#define real float // can be changed to suit application
#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
int x1x_add ( int , int  );

int x1x_add ( int a0, int a1 ){
  if ( a0 != a1 ) { goto label133; };
  int a8 = 1;
  return a8;
  label133: ;
  int a11 = a0 + a1;
  return a11;
}

int main (){
  int a5 = 1;
  char * a9005 = calloc(STRINGMAX, sizeof(char));
  sprintf( a9005, "%d", a5 );
  char * a4 = calloc(STRINGMAX, sizeof(char));
  snprintf( a4, STRINGMAX, "%d", a5 );
  whileyPrecision( a4 );
  printf ( "%s\n", a4 );
  return 0;
}
