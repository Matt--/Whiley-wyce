#define LIBRARY_TESTING true

#include <stdio.h>
#include <stdbool.h>

#define STRINGMAX 10 // used in snprint functions
#define real float // can be changed to suit application
#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
int x1x_count ( int , int  );

int x1x_count ( int a0, int a1 ){
  int a7 = 0;
  int a11 = a0 * a1;
  loop_start_label59: ;
  if ( a7 >= a11 ) { goto label59; };
  int a19 = 1;
  int a20 = a7 + a19;
  a7 = a20;
  goto loop_start_label59;
  label59: ;
  return a7;
}

int main (){
  int a5 = 0;
  int a6 = 0;
  int a4 = x1x_count ( a5, a6 );
  char * a9004 = calloc(STRINGMAX, sizeof(char));
  sprintf( a9004, "%d", a4 );
  printf ( "%i\n", a4 );
  int a11 = 1;
  int a12 = 1;
  int a10 = x1x_count ( a11, a12 );
  char * a9010 = calloc(STRINGMAX, sizeof(char));
  sprintf( a9010, "%d", a10 );
  printf ( "%i\n", a10 );
  int a17 = 5;
  int a18 = 5;
  int a16 = x1x_count ( a17, a18 );
  char * a9016 = calloc(STRINGMAX, sizeof(char));
  sprintf( a9016, "%d", a16 );
  printf ( "%i\n", a16 );
  return 0;
}
