#define LIBRARY_TESTING true

#define STRINGMAX 10 // used in snprint functions
#include <stdio.h>
#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
#define real double // can be changed to suit application
typedef struct {Any b1; Any b2; } bytes;

bytes x1x_f ( int  );

bytes x1x_f ( int a0 ){
  int a4 = 1;
  int a5 = a0 + a4;
  bytes a6 = { a0, a5 };
  return a6;
}

int main (){
  int a6 = 1;
  bytes {int b1,int b2} a105 = x1x_f ( a6 );
