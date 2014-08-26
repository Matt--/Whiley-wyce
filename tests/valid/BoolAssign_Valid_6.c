#define LIBRARY_TESTING true

#include <stdio.h>
#include <stdbool.h>

#define STRINGMAX 10 // used in snprint functions
#define real float // can be changed to suit application
#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
int x1x_f ( int , int  );

int x1x_f ( int a0, int a1 ){
  bool a3 = true;
  if ( a0 >= a1 ) { goto label158; };
  bool a6 = false;
  a3 = a6;
  label158: ;
  bool a8 = true;
  if ( a3 == a8 ) { goto label159; };
  int a11 = a0 + a1;
  return a11;
  label159: ;
  int a12 = 123;
  return a12;
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
