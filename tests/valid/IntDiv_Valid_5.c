#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
Any f ( Any , Any );

Any f ( Any a0, Any a1 ){
  Any a7 = Int(2);
  Any a8 = wyce_add( a0 , a7);
  Any a10 = Int(1);
  Any a11 = wyce_add( a1 , a10);
  Any a12 = Int(2);
  Any a14 = wyce_mul( a12 , a11);
  Any a18 = Tuple( a8, a11);
  return a18;
}

int main (){
  Any a5 = Int(2);
  Any a6 = Int(1);
  Any a10 = Int(2);
  Any a12 = wyce_mul( a10 , a6);
  Any a4 = f ( a5, a6 );
  println ( a4 );
  return 0;
}
