#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
void x1x_f ( Any , Any  );

void x1x_f ( Any a0, Any a1 ){
  Any a5 = toStr ( a1 );
  println ( a5 );
}

int main (){
  Any a1 = Null();
  Any a2 = Int(1);
  x1x_f ( a1, a2 );
  Any a6 = Str("");
  print ( a6 );
  return 0;
}
