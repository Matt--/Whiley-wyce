#define LIBRARY_TESTING true

#include <stdio.h>
#include <stdbool.h>

#define STRINGMAX 10 // used in snprint functions
#define real float // can be changed to suit application
#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef int nat;

char * x1x_f ( int  );
char * x1x_g ( int , int  );

char * x1x_f ( int a0 ){
  char * a9000 = calloc(STRINGMAX, sizeof(char));
  sprintf( a9000, "%d", a0 );
  char * a3 = calloc(STRINGMAX, sizeof(char));
  snprintf( a3, STRINGMAX, "%d", a0 );
  whileyPrecision( a3 );
  return a3;
}

char * x1x_g ( int a0, int a1 ){
  char * a12 = x1x_f ( a1 );
  return a12;
}

int main (){
  int a5 = 1;
  int a6 = 3;
  char * a4 = x1x_g ( a5, a6 );
  printf ( "%s\n", a4 );
  return 0;
}
