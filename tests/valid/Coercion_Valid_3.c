#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
Any x1x_f ( Any  );

Any x1x_f ( Any a0 ){
  a0.type = INT_TYPE;
  Any a9999 = Char(a0.c);
  a0.i = (int) a9999.c;
  return a0;
}

int main (){
  Any a6 = Char('H');
  Any a5 = x1x_f ( a6 );
  Any a4 = toStr ( a5 );
  println ( a4 );
  return 0;
}
