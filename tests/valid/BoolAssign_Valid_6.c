#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
Any x1x_f ( Any , Any  );

Any x1x_f ( Any a0, Any a1 ){
  Any a3 = Bool(true);
  if ( dataAsInt( a0 ) >= dataAsInt( a1 ) ) { goto label174; };
  Any a6 = Bool(false);
  a3 = a6;
  label174: ;
  Any a8 = Bool(true);
  if ( dataAsInt( a3 ) == dataAsInt( a8 ) ) { goto label175; };
  Any a11 = wyce_add( a0, a1);
  return a11;
  label175: ;
  Any a12 = Int(123);
  return a12;
}

int main (){
  Any a5 = Int(1);
  Any a4 = toStr ( a5 );
  println ( a4 );
  return 0;
}
