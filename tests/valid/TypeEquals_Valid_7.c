#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
Any x1x_f ( int|real  );

Any x1x_f ( int|real a0 ){
  if(a0.type == INT_TYPE){ goto label0; };
  goto label1;
  label0: ;
  string a1 = "int";
  return a1;
  label1: ;
  string a2 = "real";
  return a2;
}

int main (){
  int a5 = 1;
  string a4 = x1x_f ( a5 );
  printf ( "%s\n", a4 );
  real a10 = 1.134;
  string a9 = x1x_f ( a10 );
  printf ( "%s\n", a9 );
  real a15 = 1.0;
  string a14 = x1x_f ( a15 );
  printf ( "%s\n", a14 );
  return 0;
}
