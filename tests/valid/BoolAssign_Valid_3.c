#define LIBRARY_TESTING true

#include <stdio.h>
#include <stdbool.h>

#define STRINGMAX 10 // used in snprint functions
#define real float // can be changed to suit application
#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
int x1x_f ( int , int  );
int x1x_g ( int , int  );

int x1x_f ( int a0, int a1 ){
  if ( a0 == a1 ) { goto label142; };
  bool a9 = false;
  goto label143;
  label142: ;
  a9 = true;
  label143: ;
  bool a11 = true;
  if ( a9 == a11 ) { goto label144; };
  goto label145;
  label144: ;
  int a12 = 1;
  return a12;
  label145: ;
  int a15 = a0 + a1;
  return a15;
}

int x1x_g ( int a0, int a1 ){
  if ( a0 >= a1 ) { goto label146; };
  bool a9 = false;
  goto label147;
  label146: ;
  a9 = true;
  label147: ;
  bool a11 = true;
  if ( a9 == a11 ) { goto label148; };
  int a14 = a0 + a1;
  return a14;
  label148: ;
  int a15 = 1;
  return a15;
}

int main (){
  int a6 = 1;
  int a7 = 1;
  int a5 = x1x_f ( a6, a7 );
  char * a9005 = calloc(STRINGMAX, sizeof(char));
  sprintf( a9005, "%d", a5 );
  char * a4 = calloc(STRINGMAX, sizeof(char));
  snprintf( a4, STRINGMAX, "%d", a5 );
  whileyPrecision( a4 );
  printf ( "%s\n", a4 );
  int a13 = 0;
  int a14 = 0;
  int a12 = x1x_f ( a13, a14 );
  char * a9012 = calloc(STRINGMAX, sizeof(char));
  sprintf( a9012, "%d", a12 );
  char * a11 = calloc(STRINGMAX, sizeof(char));
  snprintf( a11, STRINGMAX, "%d", a12 );
  whileyPrecision( a11 );
  printf ( "%s\n", a11 );
  int a20 = 4;
  int a21 = 345;
  int a19 = x1x_f ( a20, a21 );
  char * a9019 = calloc(STRINGMAX, sizeof(char));
  sprintf( a9019, "%d", a19 );
  char * a18 = calloc(STRINGMAX, sizeof(char));
  snprintf( a18, STRINGMAX, "%d", a19 );
  whileyPrecision( a18 );
  printf ( "%s\n", a18 );
  int a27 = 1;
  int a28 = 1;
  int a26 = x1x_g ( a27, a28 );
  char * a9026 = calloc(STRINGMAX, sizeof(char));
  sprintf( a9026, "%d", a26 );
  char * a25 = calloc(STRINGMAX, sizeof(char));
  snprintf( a25, STRINGMAX, "%d", a26 );
  whileyPrecision( a25 );
  printf ( "%s\n", a25 );
  int a34 = 0;
  int a35 = 0;
  int a33 = x1x_g ( a34, a35 );
  char * a9033 = calloc(STRINGMAX, sizeof(char));
  sprintf( a9033, "%d", a33 );
  char * a32 = calloc(STRINGMAX, sizeof(char));
  snprintf( a32, STRINGMAX, "%d", a33 );
  whileyPrecision( a32 );
  printf ( "%s\n", a32 );
  int a41 = 4;
  int a42 = 345;
  int a40 = x1x_g ( a41, a42 );
  char * a9040 = calloc(STRINGMAX, sizeof(char));
  sprintf( a9040, "%d", a40 );
  char * a39 = calloc(STRINGMAX, sizeof(char));
  snprintf( a39, STRINGMAX, "%d", a40 );
  whileyPrecision( a39 );
  printf ( "%s\n", a39 );
  return 0;
}
