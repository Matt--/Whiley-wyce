#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef struct {Any x; } R1;
typedef struct {Any x; } R2;

R1 x1x_f ( R2  );

R1 x1x_f ( R2 a0 ){
  Any a2;
  
  return a2;
}

int main (){
  Any a6 = Int(123542);
  R2 a7 = { a6 };
  R1 a5 = x1x_f ( a7 );
  Any a4 = toStr ( a5 );
  println ( a4 );
  return 0;
}
