#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
Any x1x_add ( Any , Any  );

Any x1x_add ( Any a0, Any a1 ){
  if ( dataAsInt( a0 ) != dataAsInt( a1 ) ) { goto label149; };
  Any a8 = Int(1);
  Any a18 = Int(0);
  return a8;
  label149: ;
  Any a11 = wyce_add( a0, a1);
  a18 = Int(0);
  return a11;
}

int main (){
  Any a5 = Int(1);
  Any a4 = toStr ( a5 );
  println ( a4 );
  return 0;
}
