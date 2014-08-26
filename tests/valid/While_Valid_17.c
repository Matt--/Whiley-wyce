#define LIBRARY_TESTING true

#include <stdio.h>
#include <stdbool.h>

#define STRINGMAX 10 // used in snprint functions
#define real float // can be changed to suit application
#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"

int main (){
  int a2 = 0;
  loop_start_label56: ;
  int a4 = 5;
  if ( a2 >= a4 ) { goto label56; };
  int a6 = 3;
  if ( a2 != a6 ) { goto label57; };
  goto label56;
  label57: ;
  int a8 = 1;
  int a9 = a2 + a8;
  a2 = a9;
  goto loop_start_label56;
  label56: ;
  char * a9002 = calloc(STRINGMAX, sizeof(char));
  sprintf( a9002, "%d", a2 );
  printf ( "%i\n", a2 );
  return 0;
}
