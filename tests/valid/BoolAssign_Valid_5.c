#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
Any x1x_f ( Any , Any  );

Any x1x_f ( Any a0, Any a1 ){
  Any a7 = Bool(true);
  if ( dataAsInt( a0 ) >= dataAsInt( a1 ) ) { goto label172; };
  Any a10 = Bool(false);
  a7 = a10;
  label172: ;
  Any a12 = Bool(true);
  if ( dataAsInt( a7 ) == dataAsInt( a12 ) ) { goto label173; };
  Any a15 = wyce_add( a0, a1);
  Any a23 = Int(0);
  return a15;
  label173: ;
  Any a16 = Int(123);
  a23 = Int(0);
  return a16;
}

int main (){
  Any a5 = Int(1);
  Any a4 = toStr ( a5 );
  println ( a4 );
  return 0;
}
