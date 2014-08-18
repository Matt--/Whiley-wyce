#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef struct {Any index; Any op; } btup;

Any* x1x_f ( btup  );

Any* x1x_f ( btup a0 ){
  Any a2 = a0.op;
  Any a4 = a0.index;
  Any a5[] = {a2, a4};
  return a5;
}

int main (){
  Any a6 = Int(2);
  Any a7 = Int(1);
  btup a8 = { a6, a7 };
  Any *a5 = x1x_f ( a8 );
  Any a4 = toStr ( a5 );
  println ( a4 );
  return 0;
}
