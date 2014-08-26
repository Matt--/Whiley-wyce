#define LIBRARY_TESTING true

#include <stdio.h>
#include <stdbool.h>

#define STRINGMAX 10 // used in snprint functions
#define real float // can be changed to suit application
#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef int fr4nat;

int x1x_g ( int  );
char * x1x_f ( int  );

int x1x_g ( int a0 ){
  int a2 = 1;
  int a3 = a0 + a2;
  return a3;
}

char * x1x_f ( int a0 ){
  char * a9000 = calloc(STRINGMAX, sizeof(char));
  sprintf( a9000, "%d", a0 );
  char * a1 = calloc(STRINGMAX, sizeof(char));
  snprintf( a1, STRINGMAX, "%d", a0 );
  whileyPrecision( a1 );
  return a1;
}

int main (){
  int a2 = 1;
  int a7 = x1x_g ( a2 );
  char * a6 = x1x_f ( a7 );
  printf ( "%s\n", a6 );
  return 0;
}
