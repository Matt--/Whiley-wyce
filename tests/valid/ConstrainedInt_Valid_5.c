#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef int nat;

Any x1x_f ( void );

Any x1x_f (void){
  Any a0 = Int(1);
  return a0;
}

int main (){
  Any a5 = x1x_f (  );
  Any a4 = toStr ( a5 );
  println ( a4 );
  return 0;
}
