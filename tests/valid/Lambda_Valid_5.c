#define LIBRARY_TESTING true

#include <stdio.h>
#include <stdbool.h>

#define STRINGMAX 10 // used in snprint functions
#define real float // can be changed to suit application
#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
int x1x_f ( int  );
int x1x_g ( int (*)(int) , int  );
int x1x_$lambda193 ( int  );

int x1x_f ( int a0 ){
  int a2 = 1;
  int a3 = a0 + a2;
  return a3;
}

int x1x_g ( int ( *a0 )(int), int a1 ){
  int a2 = a0( a1 );
  return a2;
}

int main (){
  int (*a3)(int) = &x1x_$lambda193;
  int a4 = 5;
  int a2 = x1x_g ( a3, a4 );
  char * a9002 = calloc(STRINGMAX, sizeof(char));
  sprintf( a9002, "%d", a2 );
  printf ( "%i\n", a2 );
  return 0;
}

int x1x_$lambda193 ( int a0 ){
  int a3 = 1;
  int a4 = a0 + a3;
  int a1 = x1x_f ( a4 );
  return a1;
}
