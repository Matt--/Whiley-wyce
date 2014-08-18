#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
Any x1x_f ( void );

Any x1x_f (void){
  Any a0 = Str("");
  return a0;
}

int main (){
  Any a4 = x1x_f (  );
  println ( a4 );
  return 0;
}
