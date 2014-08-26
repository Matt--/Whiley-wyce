#define LIBRARY_TESTING true

#define STRINGMAX 10 // used in snprint functions
#include <stdio.h>
#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
#define real double // can be changed to suit application
typedef struct {Any b1; Any b2; } bytes;

bytes x1x_f ( int  );

bytes x1x_f ( int a0 ){
  int a2 = 2;
  bytes a3 = { a0, a2 };
  return a3;
}

int main (){
  int a2 = 1;
  bytes {int b1,int b2} a104 = x1x_f ( a2 );
