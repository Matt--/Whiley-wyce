#define LIBRARY_TESTING true

#include <stdio.h>
#include <stdbool.h>

#define STRINGMAX 10 // used in snprint functions
#define real float // can be changed to suit application
#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"

int main (){
  int a2 = 0;
  loop_start_label52: ;
  int a4 = 2;
  if ( a2 != a4 ) { goto label53; };
  goto label52;
  label53: ;
  int a6 = 1;
  int a7 = a2 + a6;
  a2 = a7;
  int a9 = 5;
  if ( a7 >= a9 ) { goto label52; };
  goto loop_start_label52;
  label52: ;
  char * a9002 = calloc(STRINGMAX, sizeof(char));
  sprintf( a9002, "%d", a2 );
  printf ( "%i\n", a2 );
  return 0;
}
