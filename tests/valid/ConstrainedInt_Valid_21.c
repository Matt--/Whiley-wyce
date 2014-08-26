#define LIBRARY_TESTING true

#include <stdio.h>
#include <stdbool.h>

#define STRINGMAX 10 // used in snprint functions
#define real float // can be changed to suit application
#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
int x1x_f ( int  );

int x1x_f ( int a0 ){
  int a4 = 1;
  int a5 = a0 + a4;
  return a5;
}

int main (){
  int a5 = 9;
  int a4 = x1x_f ( a5 );
  char * a9004 = calloc(STRINGMAX, sizeof(char));
  sprintf( a9004, "%d", a4 );
  printf ( "%i\n", a4 );
  return 0;
}
