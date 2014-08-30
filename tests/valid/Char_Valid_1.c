#define LIBRARY_TESTING true

#include <stdio.h>
#include <stdbool.h>

#define STRINGMAX 10 // used in snprint functions
#define real float // can be changed to suit application
#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
char * x1x_f ( char * , char  );

char * x1x_f ( char * a0, char a1 ){
  char * a4 = calloc( strlen( a0 ) + 1 +1, sizeof(char));
  strcat ( a4, a0 );
  a4[ strlen( a0 ) ] = a1;
  a4[ strlen( a0 ) +1 ] = '\0';
  return a4;
}

int main (){
  char * a5 = "Hello Worl";
  char a6 = 'd';
  char * a4 = x1x_f ( a5, a6 );
  printf ( "%s\n", a4 );
  return 0;
}
