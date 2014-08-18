#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef struct {Any x; Any y; } R1;
typedef struct {Any x; Any y; } R2;
typedef struct {Any x; Any y; } R3;

Any x1x_f ( R3  );

Any x1x_f ( R3 a0 ){
  Any a2;
  
  return a2;
}

int main (){
  Any a6 = Int(123542);
  Any a7 = Int(123);
  R3 a8 = { a6, a7 };
  Any a5 = x1x_f ( a8 );
  Any a4 = toStr ( a5 );
  println ( a4 );
  return 0;
}
