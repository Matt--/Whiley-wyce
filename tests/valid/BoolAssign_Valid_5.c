#define LIBRARY_TESTING true

#include <stdio.h>
#include <stdbool.h>

#define STRINGMAX 10 // used in snprint functions
#define real float // can be changed to suit application
#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
int x1x_f ( int , int  );

int x1x_f ( int a0, int a1 ){
  bool a7 = true;
  if ( a0 >= a1 ) { goto label156; };
  bool a10 = false;
  a7 = a10;
  label156: ;
  bool a12 = true;
  if ( a7 == a12 ) { goto label157; };
  int a15 = a0 + a1;
  return a15;
  label157: ;
  int a16 = 123;
  return a16;
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
