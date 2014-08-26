#define LIBRARY_TESTING true

#include <stdio.h>
#include <stdbool.h>

#define STRINGMAX 10 // used in snprint functions
#define real float // can be changed to suit application
#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
int x1x_iof ( char * , int  );

int x1x_iof ( char * a0, int a1 ){
  char a9 = a0[ a1 ];
  a9 = (int)a9;
  char a10 = 'a';
  a10 = (int)a10;
  int a11 = a9 - a10;
  return a11;
}

int main (){
  char * a6 = malloc(6 * sizeof(char));
  a6[0] = 'H';
  a6[1] = 'e';
  a6[2] = 'l';
  a6[3] = 'l';
  a6[4] = 'o';
  a6[5] = '\0';
  int a7 = 0;
  int a5 = x1x_iof ( a6, a7 );
  char * a9005 = calloc(STRINGMAX, sizeof(char));
  sprintf( a9005, "%d", a5 );
  char * a4 = calloc(STRINGMAX, sizeof(char));
  snprintf( a4, STRINGMAX, "%d", a5 );
  whileyPrecision( a4 );
  printf ( "%s\n", a4 );
  char * a13 = malloc(6 * sizeof(char));
  a13[0] = 'H';
  a13[1] = 'e';
  a13[2] = 'l';
  a13[3] = 'l';
  a13[4] = 'o';
  a13[5] = '\0';
  int a14 = 1;
  int a12 = x1x_iof ( a13, a14 );
  char * a9012 = calloc(STRINGMAX, sizeof(char));
  sprintf( a9012, "%d", a12 );
  char * a11 = calloc(STRINGMAX, sizeof(char));
  snprintf( a11, STRINGMAX, "%d", a12 );
  whileyPrecision( a11 );
  printf ( "%s\n", a11 );
  char * a20 = malloc(6 * sizeof(char));
  a20[0] = 'H';
  a20[1] = 'e';
  a20[2] = 'l';
  a20[3] = 'l';
  a20[4] = 'o';
  a20[5] = '\0';
  int a21 = 2;
  int a19 = x1x_iof ( a20, a21 );
  char * a9019 = calloc(STRINGMAX, sizeof(char));
  sprintf( a9019, "%d", a19 );
  char * a18 = calloc(STRINGMAX, sizeof(char));
  snprintf( a18, STRINGMAX, "%d", a19 );
  whileyPrecision( a18 );
  printf ( "%s\n", a18 );
  char * a27 = malloc(6 * sizeof(char));
  a27[0] = 'H';
  a27[1] = 'e';
  a27[2] = 'l';
  a27[3] = 'l';
  a27[4] = 'o';
  a27[5] = '\0';
  int a28 = 3;
  int a26 = x1x_iof ( a27, a28 );
  char * a9026 = calloc(STRINGMAX, sizeof(char));
  sprintf( a9026, "%d", a26 );
  char * a25 = calloc(STRINGMAX, sizeof(char));
  snprintf( a25, STRINGMAX, "%d", a26 );
  whileyPrecision( a25 );
  printf ( "%s\n", a25 );
  char * a34 = malloc(6 * sizeof(char));
  a34[0] = 'H';
  a34[1] = 'e';
  a34[2] = 'l';
  a34[3] = 'l';
  a34[4] = 'o';
  a34[5] = '\0';
  int a35 = 4;
  int a33 = x1x_iof ( a34, a35 );
  char * a9033 = calloc(STRINGMAX, sizeof(char));
  sprintf( a9033, "%d", a33 );
  char * a32 = calloc(STRINGMAX, sizeof(char));
  snprintf( a32, STRINGMAX, "%d", a33 );
  whileyPrecision( a32 );
  printf ( "%s\n", a32 );
  return 0;
}
