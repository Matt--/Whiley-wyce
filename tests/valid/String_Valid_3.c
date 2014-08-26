#define LIBRARY_TESTING true

#include <stdio.h>
#include <stdbool.h>

#define STRINGMAX 10 // used in snprint functions
#define real float // can be changed to suit application
#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
bool x1x_has ( char , char *  );

bool x1x_has ( char a0, char * a1 ){
  int count = 0;
  loop_start_label163: ;
  if(count == strlen(a1) ){ goto label163; }
  char a3 = a1[count];
  count++;
  if ( a0 != a3 ) { goto label164; };
  bool a6 = true;
  return a6;
  label164: ;
  goto loop_start_label163;
  label163: ;
  bool a7 = false;
  return a7;
}

int main (){
  char * a2 = malloc(12 * sizeof(char));
  a2[0] = 'H';
  a2[1] = 'e';
  a2[2] = 'l';
  a2[3] = 'l';
  a2[4] = 'o';
  a2[5] = ' ';
  a2[6] = 'W';
  a2[7] = 'o';
  a2[8] = 'r';
  a2[9] = 'l';
  a2[10] = 'd';
  a2[11] = '\0';
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
