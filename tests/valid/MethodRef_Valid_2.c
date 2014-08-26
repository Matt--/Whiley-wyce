#define LIBRARY_TESTING true

#include <stdio.h>
#include <stdbool.h>

#define STRINGMAX 10 // used in snprint functions
#define real double // can be changed to suit application
#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef struct {Any read; } Reader;

int x1x_f ( int  );
int x1x_m ( int, int  );

int x1x_f ( int a0 ){
  int a1 = 1;
  return a1;
}

int x1x_m ( int a0, int a1 ){
  method(int) => int a4 = a0.read;
  int a2 = a4( a1 );
  return a2;
}

int main (){
  int (*a2)(int) = &x1x_f;
  Reader a3 = { a2 };
  int a7 = 1;
  int a5 = x1x_m ( a3, a7 );
  char * a9005 = calloc(STRINGMAX, sizeof(char));
  sprintf( a9005, "%d", a5 );
  char * a11 = calloc(STRINGMAX, sizeof(char));
  snprintf( a11, STRINGMAX, "%d", a5 );
  whileyPrecision( a11 );
  printf ( "%s\n", a11 );
  return 0;
}
