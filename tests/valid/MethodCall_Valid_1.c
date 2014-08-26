#define LIBRARY_TESTING true

#define STRINGMAX 10 // used in snprint functions
#include <stdio.h>
#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
#define real double // can be changed to suit application
void x1x_f ( {[string] args,{method(any) => void print,method(any) => void println} out} , int  );

void x1x_f ( {[string] args a0, {method(any) => void print a1, method(any) => void println} out} a2, int a3 ){
  char * a5 = calloc(STRINGMAX, sizeof(char));
  snprintf( a5, STRINGMAX, "fail", a1 );
  whileyPrecision( a5 );
  printf ( "%s\n", a5 );
}

int main (){
   a1 = Null();
  int a2 = 1;
  x1x_f ( a1, a2 );
  char *  a6 = "";
