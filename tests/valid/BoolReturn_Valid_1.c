#define LIBRARY_TESTING true

#include <stdio.h>
#include <stdbool.h>

#define STRINGMAX 10 // used in snprint functions
#define real float // can be changed to suit application
#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
bool x1x_pred ( void );

bool x1x_pred (void){
  bool a0 = false;
  return a0;
}

int main (){
  bool a4 = x1x_pred (  );
  char * a9004 = calloc(STRINGMAX, sizeof(char));
  sprintf( a9004, "%s", a4 ? "true" : "false" );
  printf ( "%s\n", a4 ? "true" : "false");
  return 0;
}
