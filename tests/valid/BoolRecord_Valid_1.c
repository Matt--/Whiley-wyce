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
  char * a8 = recordToStr2( "code", a4.code, "flag", a4.flag);
  printf ( "%s\n", a8 );
  bool a10 = false;
  a4.flag = a10;
  char * a14 = recordToStr2( "code", a4.code, "flag", a4.flag);
  printf ( "%s\n", a14 );
  return 0;
}
