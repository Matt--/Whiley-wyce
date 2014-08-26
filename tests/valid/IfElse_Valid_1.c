#define LIBRARY_TESTING true

#include <stdio.h>
#include <stdbool.h>

#define STRINGMAX 10 // used in snprint functions
#define real float // can be changed to suit application
#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
char * x1x_f ( int  );

char * x1x_f ( int a0 ){
  int a2 = 10;
  if ( a0 >= a2 ) { goto label0; };
  char * a3 = malloc(10 * sizeof(char));
  a3[0] = 'L';
  a3[1] = 'E';
  a3[2] = 'S';
  a3[3] = 'S';
  a3[4] = ' ';
  a3[5] = 'T';
  a3[6] = 'H';
  a3[7] = 'A';
  a3[8] = 'N';
  a3[9] = '\0';
  return a3;
  label0: ;
  int a5 = 10;
  if ( a0 <= a5 ) { goto label1; };
  char * a6 = malloc(13 * sizeof(char));
  a6[0] = 'G';
  a6[1] = 'R';
  a6[2] = 'E';
  a6[3] = 'A';
  a6[4] = 'T';
  a6[5] = 'E';
  a6[6] = 'R';
  a6[7] = ' ';
  a6[8] = 'T';
  a6[9] = 'H';
  a6[10] = 'A';
  a6[11] = 'N';
  a6[12] = '\0';
  return a6;
  label1: ;
  char * a7 = malloc(7 * sizeof(char));
  a7[0] = 'E';
  a7[1] = 'Q';
  a7[2] = 'U';
  a7[3] = 'A';
  a7[4] = 'L';
  a7[5] = 'S';
  a7[6] = '\0';
  return a7;
}

int main (){
  int a5 = 1;
  char * a4 = x1x_f ( a5 );
  printf ( "%s\n", a4 );
  int a10 = 10;
  char * a9 = x1x_f ( a10 );
  printf ( "%s\n", a9 );
  int a15 = 11;
  char * a14 = x1x_f ( a15 );
  printf ( "%s\n", a14 );
  int a20 = 1212;
  char * a19 = x1x_f ( a20 );
  printf ( "%s\n", a19 );
  int a25 = 1212;
  int a26 = -a25;
  char * a24 = x1x_f ( a26 );
  printf ( "%s\n", a24 );
  return 0;
}
