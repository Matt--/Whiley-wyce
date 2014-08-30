#define LIBRARY_TESTING true

#include <stdio.h>
#include <stdbool.h>

#define STRINGMAX 10 // used in snprint functions
#define real float // can be changed to suit application
#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
char * x1x_f ( int , real  );

char * x1x_f ( int a0, real a1 ){
  a0 = (real)a0;
  if ( a0 != a1 ) { goto label160; };
  char * a4 = "EQUAL";
  return a4;
  label160: ;
  char * a5 = "NOT EQUAL";
  return a5;
}

int main (){
  int a5 = 1;
  real a6 = 4.0;
  char * a4 = x1x_f ( a5, a6 );
  printf ( "%s\n", a4 );
  int a11 = 1;
  real a12 = 4.2;
  char * a10 = x1x_f ( a11, a12 );
  printf ( "%s\n", a10 );
  int a17 = 0;
  real a18 = 0;
  char * a16 = x1x_f ( a17, a18 );
  printf ( "%s\n", a16 );
  return 0;
}
