#define LIBRARY_TESTING true

#define STRINGMAX 10 // used in snprint functions
#include <stdio.h>
#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
#define real double // can be changed to suit application

int main (){
  int a2 = 0;
  bool a3 = true;
  typedef struct {Any code; Any flag; }Record4;
  Record4 a4 = { a2, a3 };
  bool a6 = a4.flag;
  bool a7 = true;
  if ( a6 == a7 ) { goto label131; };
  goto label132;
  label131: ;
  static char a11[] = "GOT HERE";
  printf ( "%s\n", a11 );
  label132: ;
  return 0;
}
