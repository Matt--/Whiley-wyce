#define LIBRARY_TESTING true

#include <stdio.h>
#include <stdbool.h>

#define STRINGMAX 10 // used in snprint functions
#define real float // can be changed to suit application
#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
bool x1x_has ( char , char *  );

bool x1x_has ( char a0, char * a1 ){
  int a3 = 0;
  int a5 = 0;
  loop_start_label161: ;
  int a7 = 0;
  int a10 = strlen( a1);
  if ( a3 >= a10 ) { goto label161; };
  char a13 = a1[ a3 ];
  if ( a13 != a0 ) { goto label162; };
  bool a15 = true;
  return a15;
  label162: ;
  int a17 = 1;
  int a18 = a3 + a17;
  a3 = a18;
  int a20 = 0;
  goto loop_start_label161;
  label161: ;
  bool a21 = false;
  return a21;
}

int main (){
  char * a2 = "Hello World";
  char a8 = 'l';
  bool a7 = x1x_has ( a8, a2 );
  char * a9007 = calloc(STRINGMAX, sizeof(char));
  sprintf( a9007, "%s", a7 ? "true" : "false" );
  char * a6 = calloc(STRINGMAX, sizeof(char));
  snprintf( a6, STRINGMAX, "%s", a7 ? "true" : "false");
  whileyPrecision( a6 );
  printf ( "%s\n", a6 );
  char a15 = 'e';
  bool a14 = x1x_has ( a15, a2 );
  char * a9014 = calloc(STRINGMAX, sizeof(char));
  sprintf( a9014, "%s", a14 ? "true" : "false" );
  char * a13 = calloc(STRINGMAX, sizeof(char));
  snprintf( a13, STRINGMAX, "%s", a14 ? "true" : "false");
  whileyPrecision( a13 );
  printf ( "%s\n", a13 );
  char a22 = 'h';
  bool a21 = x1x_has ( a22, a2 );
  char * a9021 = calloc(STRINGMAX, sizeof(char));
  sprintf( a9021, "%s", a21 ? "true" : "false" );
  char * a20 = calloc(STRINGMAX, sizeof(char));
  snprintf( a20, STRINGMAX, "%s", a21 ? "true" : "false");
  whileyPrecision( a20 );
  printf ( "%s\n", a20 );
  char a29 = 'z';
  bool a28 = x1x_has ( a29, a2 );
  char * a9028 = calloc(STRINGMAX, sizeof(char));
  sprintf( a9028, "%s", a28 ? "true" : "false" );
  char * a27 = calloc(STRINGMAX, sizeof(char));
  snprintf( a27, STRINGMAX, "%s", a28 ? "true" : "false");
  whileyPrecision( a27 );
  printf ( "%s\n", a27 );
  char a36 = 'H';
  bool a35 = x1x_has ( a36, a2 );
  char * a9035 = calloc(STRINGMAX, sizeof(char));
  sprintf( a9035, "%s", a35 ? "true" : "false" );
  char * a34 = calloc(STRINGMAX, sizeof(char));
  snprintf( a34, STRINGMAX, "%s", a35 ? "true" : "false");
  whileyPrecision( a34 );
  printf ( "%s\n", a34 );
  return 0;
}
