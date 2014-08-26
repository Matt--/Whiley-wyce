#define LIBRARY_TESTING true

#include <stdio.h>
#include <stdbool.h>

#define STRINGMAX 10 // used in snprint functions
#define real float // can be changed to suit application
#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
char * x1x_f ( bool  );

char * x1x_f ( bool a0 ){
  bool a2 = true;
  if ( a0 == a2 ) { goto label119; };
  goto label120;
  label119: ;
  char * a3 = malloc(5 * sizeof(char));
  a3[0] = 'T';
  a3[1] = 'R';
  a3[2] = 'U';
  a3[3] = 'E';
  a3[4] = '\0';
  return a3;
  label120: ;
  char * a4 = malloc(6 * sizeof(char));
  a4[0] = 'F';
  a4[1] = 'A';
  a4[2] = 'L';
  a4[3] = 'S';
  a4[4] = 'E';
  a4[5] = '\0';
  return a4;
}

int main (){
  bool a5 = true;
  char * a4 = x1x_f ( a5 );
  printf ( "%s\n", a4 );
  bool a10 = false;
  char * a9 = x1x_f ( a10 );
  printf ( "%s\n", a9 );
  return 0;
}
