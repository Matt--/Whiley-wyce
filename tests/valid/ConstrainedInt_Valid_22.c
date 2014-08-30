#define LIBRARY_TESTING true

#include <stdio.h>
#include <stdbool.h>

#define STRINGMAX 10 // used in snprint functions
#define real float // can be changed to suit application
#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef int item;

int x1x_inc ( int  );
void x1x_print ( int, int , int  );

int x1x_inc ( int a0 ){
  int a2 = 1;
  int a3 = a0 + a2;
  int a4 = 7;
  int a5 = a3 % a4;
  return a5;
}

void x1x_print ( int a0, int a1, int a2 ){
  int a4 = 0;
  if ( a2 <= a4 ) { goto label195; };
  char * a8 = {"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
  char * a10 = a8[ a1 ];
  printf ( "%s\n", a10 );
  int a12 = x1x_inc ( a1 );
  int a15 = 1;
  int a16 = a2 - a15;
  x1x_print ( a0, a12, a16 );
  label195: ;
  return;
}

int main (){
  int a1 = NULL;
  int a2 = 0;
  int a3 = 15;
  x1x_print ( a1, a2, a3 );
  return 0;
}
