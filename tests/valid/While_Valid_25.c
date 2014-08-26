#define LIBRARY_TESTING true

#include <stdio.h>
#include <stdbool.h>

#define STRINGMAX 10 // used in snprint functions
#define real float // can be changed to suit application
#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
int x1x_f ( int  );

int x1x_f ( int a0 ){
  int a2 = 0;
  int a4 = 0;
  int a6 = 2;
  int a8 = a6 * a2;
  loop_start_label58: ;
  int a10 = 2;
  int a12 = a10 * a2;
  if ( a2 >= a0 ) { goto label58; };
  int a16 = 1;
  int a17 = a2 + a16;
  a2 = a17;
  int a19 = 2;
  int a20 = a4 + a19;
  a4 = a20;
  int a22 = 2;
  int a24 = a22 * a17;
  goto loop_start_label58;
  label58: ;
  int a27 = a2 + a4;
  return a27;
}

int main (){
  int a5 = 10;
  int a4 = x1x_f ( a5 );
  char * a9004 = calloc(STRINGMAX, sizeof(char));
  sprintf( a9004, "%d", a4 );
  printf ( "%i\n", a4 );
  return 0;
}
