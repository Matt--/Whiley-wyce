#define LIBRARY_TESTING true

#include <stdio.h>
#include <stdbool.h>

#define STRINGMAX 10 // used in snprint functions
#define real float // can be changed to suit application
#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef int(*func)(int);

func x1x_g ( void );
int x1x_$lambda95 ( int  );

func x1x_g (void){
  int (*a0)(int) = &x1x_$lambda95;
  return a0;
}

int main (){
  func a2 = x1x_g (  );
  int a8 = 1;
  int a6 = a2( a8 );
  char * a9006 = calloc(STRINGMAX, sizeof(char));
  sprintf( a9006, "%d", a6 );
  printf ( "%i\n", a6 );
  int a14 = 2;
  int a12 = a2( a14 );
  char * a9012 = calloc(STRINGMAX, sizeof(char));
  sprintf( a9012, "%d", a12 );
  printf ( "%i\n", a12 );
  int a20 = 3;
  int a18 = a2( a20 );
  char * a9018 = calloc(STRINGMAX, sizeof(char));
  sprintf( a9018, "%d", a18 );
  printf ( "%i\n", a18 );
  return 0;
}

int x1x_$lambda95 ( int a0 ){
  int a2 = 1;
  int a3 = a0 + a2;
  return a3;
}
