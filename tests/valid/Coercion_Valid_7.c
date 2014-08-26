#define LIBRARY_TESTING true

#define STRINGMAX 10 // used in snprint functions
#include <stdio.h>
#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
#define real double // can be changed to suit application
int x1x_f ( bool|int  );

int x1x_f ( bool|int a0 ){
  if(a0.type == INT_TYPE){ goto label129; };
  goto label130;
  label129: ;
  return a0;
  label130: ;
  int a2 = 1;
  return a2;
}

int main (){
  bool a6 = true;
  ;
  int a5 = x1x_f ( a6 );
  char * a4 = calloc(STRINGMAX, sizeof(char));
  snprintf( a4, STRINGMAX, "%d", a5 );
  whileyPrecision( a4 );
  printf ( "%s\n", a4 );
  int a12 = 123;
  ;
  int a11 = x1x_f ( a12 );
  char * a10 = calloc(STRINGMAX, sizeof(char));
  snprintf( a10, STRINGMAX, "%d", a11 );
  whileyPrecision( a10 );
  printf ( "%s\n", a10 );
  return 0;
}
