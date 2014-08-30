#define LIBRARY_TESTING true

#include <stdio.h>
#include <stdbool.h>

#define STRINGMAX 10 // used in snprint functions
#define real float // can be changed to suit application
#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef int ir1nat;
typedef int pir1nat;

char * x1x_f ( int  );

char * x1x_f ( int a0 ){
  int a2 = 2;
  if ( a0 <= a2 ) { goto label134; };
  char * a9000 = calloc(STRINGMAX, sizeof(char));
  sprintf( a9000, "%d", a0 );
  char * a5 = calloc(STRINGMAX, sizeof(char));
  snprintf( a5, STRINGMAX, "%d", a0 );
  whileyPrecision( a5 );
  return a5;
  label134: ;
  char * a7 = "";
  return a7;
}

int main (){
  int a5 = 1;
  char * a4 = x1x_f ( a5 );
  printf ( "%s\n", a4 );
  int a10 = 2;
  char * a9 = x1x_f ( a10 );
  printf ( "%s\n", a9 );
  int a15 = 3;
  char * a14 = x1x_f ( a15 );
  printf ( "%s\n", a14 );
  return 0;
}
