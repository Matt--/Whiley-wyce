#define LIBRARY_TESTING true

#define STRINGMAX 10 // used in snprint functions
#include <stdio.h>
#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
#define real double // can be changed to suit application
typedef struct {Any f1; Any f2; } tac1tup;

tac1tup x1x_f ( void );

tac1tup x1x_f (void){
  int a0 = 1;
  int a1 = 3;
  tac1tup a2 = { a0, a1 };
  return a2;
}

int main (){
  tac1tup {int f1,int f2} a102 = x1x_f (  );
  int a4 = a102.f2;
  int a5 = 2;
  int a6 = a4 - a5;
  a102.f1 = int;
  int a8 = a102.f1;
  int a10 = a102.f2;
