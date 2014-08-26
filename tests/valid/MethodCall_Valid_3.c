#define LIBRARY_TESTING true

#define STRINGMAX 10 // used in snprint functions
#include <stdio.h>
#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
#define real double // can be changed to suit application
typedef struct {Any x; Any y; } wmcr6tup;

int x1x_get ( void );
wmcr6tup x1x_f ( int  );

int x1x_get (void){
  int a0 = 1;
  return a0;
}

wmcr6tup x1x_f ( int a0 ){
  int a2 = x1x_get (  );
  wmcr6tup a3 = { a0, a2 };
  return a3;
}

int main (){
  int a6 = 1;
  wmcr6tup {int x,int y} a105 = x1x_f ( a6 );
