#define LIBRARY_TESTING true

#include <stdio.h>
#include <stdbool.h>

#define STRINGMAX 10 // used in snprint functions
#define real float // can be changed to suit application
#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
char * x1x_f ( bool  );

char * x1x_f ( bool a0 ){
  bool a2 = true;
  if ( a0 == a2 ) { goto label121; };
  goto label122;
  label121: ;
  char * a3 = "TRUE";
  return a3;
  label122: ;
  char * a4 = "FALSE";
  return a4;
}

int main (){
  bool a5 = true;
  char * a4 = x1x_f ( a5 );
  printf ( "%s\n", a4 );
  bool a10 = false;
  char * a9 = x1x_f ( a10 );
  printf ( "%s\n", a9 );
  return 0;
}
