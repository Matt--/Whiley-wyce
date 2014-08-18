#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
Any x1x_pred ( void );

Any x1x_pred (void){
  Any a0 = Bool(false);
  return a0;
}

int main (){
  Any a4 = x1x_pred (  );
  println ( a4 );
  return 0;
}
