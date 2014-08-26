#define LIBRARY_TESTING true

#include <stdio.h>
#include <stdbool.h>

#define STRINGMAX 10 // used in snprint functions
#define real float // can be changed to suit application
#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef int(*func_t)(int);

int x1x_f ( int  );
int x1x_g ( int  );
int x1x_$lambda181 ( int  );

int x1x_f ( int a0 ){
  int a4 = 1;
  int a5 = a0 + a4;
  return a5;
}

int x1x_g ( int a0 ){
  int (*a4)(int) = &x1x_$lambda181;
  int a5 = a4( a0 );
  return a5;
}

int main (){
  int a3 = 5;
  int a2 = x1x_g ( a3 );
  char * a9002 = calloc(STRINGMAX, sizeof(char));
  sprintf( a9002, "%d", a2 );
  printf ( "%i\n", a2 );
  return 0;
}

int x1x_$lambda181 ( int a0 ){
  int a3 = 1;
  int a4 = a0 + a3;
  int a1 = x1x_f ( a4 );
  return a1;
}
