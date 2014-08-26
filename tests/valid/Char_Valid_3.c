#define LIBRARY_TESTING true

#include <stdio.h>
#include <stdbool.h>

#define STRINGMAX 10 // used in snprint functions
#define real float // can be changed to suit application
#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
char * x1x_rep ( char , char , char *  );

char * x1x_rep ( char a0, char a1, char * a2 ){
  int a4 = 0;
  int a6 = 0;
  loop_start_label129: ;
  int a8 = 0;
  int a11 = strlen( a2);
  if ( a4 >= a11 ) { goto label129; };
  char a14 = a2[ a4 ];
  if ( a14 != a0 ) { goto label130; };
  a2[a4] = a1;
  label130: ;
  int a19 = 1;
  int a20 = a4 + a19;
  a4 = a20;
  int a22 = 0;
  goto loop_start_label129;
  label129: ;
  return a2;
}

int main (){
  char a5 = 'e';
  char a6 = 'w';
  char * a7 = malloc(6 * sizeof(char));
  a7[0] = 'H';
  a7[1] = 'e';
  a7[2] = 'l';
  a7[3] = 'l';
  a7[4] = 'o';
  a7[5] = '\0';
  char * a4 = x1x_rep ( a5, a6, a7 );
  printf ( "%s\n", a4 );
  char a12 = 'H';
  char a13 = 'z';
  char * a14 = malloc(6 * sizeof(char));
  a14[0] = 'H';
  a14[1] = 'e';
  a14[2] = 'l';
  a14[3] = 'l';
  a14[4] = 'o';
  a14[5] = '\0';
  char * a11 = x1x_rep ( a12, a13, a14 );
  printf ( "%s\n", a11 );
  char a19 = 'o';
  char a20 = '1';
  char * a21 = malloc(6 * sizeof(char));
  a21[0] = 'H';
  a21[1] = 'e';
  a21[2] = 'l';
  a21[3] = 'l';
  a21[4] = 'o';
  a21[5] = '\0';
  char * a18 = x1x_rep ( a19, a20, a21 );
  printf ( "%s\n", a18 );
  return 0;
}
