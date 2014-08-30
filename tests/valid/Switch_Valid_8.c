#define LIBRARY_TESTING true

#include <stdio.h>
#include <stdbool.h>

#define STRINGMAX 10 // used in snprint functions
#define real float // can be changed to suit application
#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"

int main (){
  int a2 = 1;
  switch( a2 ){
    case 1 : goto label187;
    case 2 : goto label188;
    default : goto label186;
  }
  label187: ;
  char * a7 = "CASE 1";
  printf ( "%s\n", a7 );
  return 0;
  label188: ;
  char * a11 = "CASE 2";
  printf ( "%s\n", a11 );
  label186: ;
  return 0;
  char * a15 = "DEFAULT CASE";
  printf ( "%s\n", a15 );
  return 0;
}
