#define LIBRARY_TESTING true

#include <stdio.h>
#include <stdbool.h>

#define STRINGMAX 10 // used in snprint functions
#define real double // can be changed to suit application
#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef struct {Any read; } Func;

int x1x_id ( int  );
int x1x_test ( int, int  );

int x1x_id ( int a0 ){
  return a0;
}

int x1x_test ( int a0, int a1 ){
  function(int) => int a4 = a0.read;
  int a2 = ( FUNCPARAMS_ONE function(int) => int.f.ptr )(int);
  return a2;
}

int main (){
  int a3 = Fptr( &x1x_id, 1 );
  Func a4 = { a3 };
  int a5 = 123;
  int a2 = x1x_test ( a4, a5 );
  static char a9[] = "GOT: ";
  char * a9002 = calloc(STRINGMAX, sizeof(char));
  sprintf( a9002, "%d", a2 );
  char * a10 = calloc(STRINGMAX, sizeof(char));
  snprintf( a10, STRINGMAX, "%d", a2 );
  whileyPrecision( a10 );
  char * a12 = calloc( strlen( a9 ) + strlen( a10 ) +1, sizeof(char));
  strcat( a12, a9 );
  strcat( a12, a10 );
  printf ( "%s\n", a12 );
  int a14 = Fptr( &x1x_id, 1 );
  Func a15 = { a14 };
  int a16 = 12545;
  int a13 = x1x_test ( a15, a16 );
  a2 = a13;
  static char a20[] = "GOT: ";
  a9002 = calloc(STRINGMAX, sizeof(char));
  sprintf( a9002, "%d", a2 );
  char * a21 = calloc(STRINGMAX, sizeof(char));
  snprintf( a21, STRINGMAX, "%d", a2 );
  whileyPrecision( a21 );
  char * a23 = calloc( strlen( a20 ) + strlen( a21 ) +1, sizeof(char));
  strcat( a23, a20 );
  strcat( a23, a21 );
  printf ( "%s\n", a23 );
  int a25 = Fptr( &x1x_id, 1 );
  Func a26 = { a25 };
  int a27 = 11;
  int a28 =  -a27;
  int a24 = x1x_test ( a26, a28 );
  a2 = a24;
  static char a32[] = "GOT: ";
  a9002 = calloc(STRINGMAX, sizeof(char));
  sprintf( a9002, "%d", a2 );
  char * a33 = calloc(STRINGMAX, sizeof(char));
  snprintf( a33, STRINGMAX, "%d", a2 );
  whileyPrecision( a33 );
  char * a35 = calloc( strlen( a32 ) + strlen( a33 ) +1, sizeof(char));
  strcat( a35, a32 );
  strcat( a35, a33 );
  printf ( "%s\n", a35 );
  return 0;
}
