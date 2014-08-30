#define LIBRARY_TESTING true

#include <stdio.h>
#include <stdbool.h>

#define STRINGMAX 10 // used in snprint functions
#define real float // can be changed to suit application
#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
char * x1x_f ( int  );

char * x1x_f ( int a0 ){
  int a2 = 10;
  if ( a0 >= a2 ) { goto label0; };
  char * a3 = "LESS THAN";
  return a3;
  label0: ;
  int a5 = 10;
  if ( a0 <= a5 ) { goto label1; };
  char * a6 = "GREATER THAN";
  return a6;
  label1: ;
  char * a7 = "EQUALS";
  return a7;
}

int main (){
  int a5 = 1;
  char * a4 = x1x_f ( a5 );
  printf ( "%s\n", a4 );
  int a10 = 10;
  char * a9 = x1x_f ( a10 );
  printf ( "%s\n", a9 );
  int a15 = 11;
  char * a14 = x1x_f ( a15 );
  printf ( "%s\n", a14 );
  int a20 = 1212;
  char * a19 = x1x_f ( a20 );
  printf ( "%s\n", a19 );
  int a25 = 1212;
  int a26 = -a25;
  char * a24 = x1x_f ( a26 );
  printf ( "%s\n", a24 );
  return 0;
}
