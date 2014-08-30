#define LIBRARY_TESTING true

#include <stdio.h>
#include <stdbool.h>

#define STRINGMAX 10 // used in snprint functions
#define real float // can be changed to suit application
#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
char * x1x_repl ( char , char , char *  );

char * x1x_repl ( char a0, char a1, char * a2 ){
  int a4 = 0;
  int a6 = 0;
  loop_start_label165: ;
  int a8 = 0;
  int a11 = strlen( a2);
  if ( a4 >= a11 ) { goto label165; };
  char a14 = a2[ a4 ];
  if ( a14 != a0 ) { goto label166; };
  a2[a4] = a1;
  label166: ;
  int a19 = 1;
  int a20 = a4 + a19;
  a4 = a20;
  int a22 = 0;
  goto loop_start_label165;
  label165: ;
  return a2;
}

int main (){
  char * a2 = "Hello World";
  char a4 = 'l';
  char a5 = '1';
  char * a3 = x1x_repl ( a4, a5, a2 );
  printf ( "%s\n", a3 );
  return 0;
}
