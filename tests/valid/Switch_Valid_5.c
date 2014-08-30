#define LIBRARY_TESTING true

#include <stdio.h>
#include <stdbool.h>

#define STRINGMAX 10 // used in snprint functions
#define real float // can be changed to suit application
#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
const int IHDR_TYPE = 1380206665 ;
const int IEND_TYPE = 1145980233 ;
const int IDAT_TYPE = 1413563465 ;
const int PLTE_TYPE = 1163152464 ;
const int PHYS_TYPE = 1935231088 ;
const int TIME_TYPE = 1162692980 ;

int x1x_f ( int  );

int x1x_f ( int a0 ){
  switch( a0 ){
    case 1380206665 : goto label175;
    case 1145980233 : goto label176;
    case 1163152464 : goto label177;
    case 1935231088 : goto label178;
    case 1162692980 : goto label179;
    default : goto label174;
  }
  label175: ;
  int a2 = 1;
  return a2;
  label176: ;
  int a3 = 2;
  return a3;
  label177: ;
  int a4 = 3;
  return a4;
  label178: ;
  int a5 = 4;
  return a5;
  label179: ;
  int a6 = 5;
  return a6;
  label174: ;
  int a7 = 6;
  return a7;
}

int main (){
  char * a4 = "GOT: ";
  int a6 = 1380206665;
  int a5 = x1x_f ( a6 );
  char * a9005 = calloc(STRINGMAX, sizeof(char));
  sprintf( a9005, "%d", a5 );
  whileyPrecision( a9005 );
  ;
  char * a7 = calloc( strlen( a4 ) + strlen( a9005 ) +1, sizeof(char));
  strcat( a7, a4 );
  strcat( a7, a9005 );
  printf ( "%s\n", a7 );
  char * a11 = "GOT: ";
  int a13 = 1145980233;
  int a12 = x1x_f ( a13 );
  char * a9012 = calloc(STRINGMAX, sizeof(char));
  sprintf( a9012, "%d", a12 );
  whileyPrecision( a9012 );
  ;
  char * a14 = calloc( strlen( a11 ) + strlen( a9012 ) +1, sizeof(char));
  strcat( a14, a11 );
  strcat( a14, a9012 );
  printf ( "%s\n", a14 );
  char * a18 = "GOT: ";
  int a20 = 1163152464;
  int a19 = x1x_f ( a20 );
  char * a9019 = calloc(STRINGMAX, sizeof(char));
  sprintf( a9019, "%d", a19 );
  whileyPrecision( a9019 );
  ;
  char * a21 = calloc( strlen( a18 ) + strlen( a9019 ) +1, sizeof(char));
  strcat( a21, a18 );
  strcat( a21, a9019 );
  printf ( "%s\n", a21 );
  char * a25 = "GOT: ";
  int a27 = 1935231088;
  int a26 = x1x_f ( a27 );
  char * a9026 = calloc(STRINGMAX, sizeof(char));
  sprintf( a9026, "%d", a26 );
  whileyPrecision( a9026 );
  ;
  char * a28 = calloc( strlen( a25 ) + strlen( a9026 ) +1, sizeof(char));
  strcat( a28, a25 );
  strcat( a28, a9026 );
  printf ( "%s\n", a28 );
  char * a32 = "GOT: ";
  int a34 = 1162692980;
  int a33 = x1x_f ( a34 );
  char * a9033 = calloc(STRINGMAX, sizeof(char));
  sprintf( a9033, "%d", a33 );
  whileyPrecision( a9033 );
  ;
  char * a35 = calloc( strlen( a32 ) + strlen( a9033 ) +1, sizeof(char));
  strcat( a35, a32 );
  strcat( a35, a9033 );
  printf ( "%s\n", a35 );
  return 0;
}
