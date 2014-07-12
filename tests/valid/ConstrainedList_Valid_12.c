#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
Any* f ( Any );

Any* f ( Any a0 ){
  Any a2[] = {a0};
  return a2;
}

int main (){
  Any a3 = Int(0);
  Any *a2 = f ( a3 );
  Any *a1 = a2;
  Any *a8 = a1;
  Any a7 = toStr ( a8 );
  println ( a7 );
  return 0;
}
