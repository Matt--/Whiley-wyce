#define LIBRARY_TESTING true

#include <stdio.h>
#include <stdbool.h>

#define STRINGMAX 10 // used in snprint functions
#define real float // can be changed to suit application
#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"

int main (){
  int a2 = 1;
  switch( a2 ){
    case 1 : goto label187;
    case 2 : goto label188;
    default : goto label186;
  }
  label187: ;
  char * a7 = malloc(7 * sizeof(char));
  a7[0] = 'C';
  a7[1] = 'A';
  a7[2] = 'S';
  a7[3] = 'E';
  a7[4] = ' ';
  a7[5] = '1';
  a7[6] = '\0';
  printf ( "%s\n", a7 );
  return 0;
  label188: ;
  char * a11 = malloc(7 * sizeof(char));
  a11[0] = 'C';
  a11[1] = 'A';
  a11[2] = 'S';
  a11[3] = 'E';
  a11[4] = ' ';
  a11[5] = '2';
  a11[6] = '\0';
  printf ( "%s\n", a11 );
  label186: ;
  return 0;
  char * a15 = malloc(13 * sizeof(char));
  a15[0] = 'D';
  a15[1] = 'E';
  a15[2] = 'F';
  a15[3] = 'A';
  a15[4] = 'U';
  a15[5] = 'L';
  a15[6] = 'T';
  a15[7] = ' ';
  a15[8] = 'C';
  a15[9] = 'A';
  a15[10] = 'S';
  a15[11] = 'E';
  a15[12] = '\0';
  printf ( "%s\n", a15 );
  return 0;
}
