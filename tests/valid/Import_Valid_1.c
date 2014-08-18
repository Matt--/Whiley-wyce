#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
Any x1x_f ( Any  );

Any x1x_f ( Any a0 ){
  Any a2 = Int(0);
  if ( dataAsInt( a0 ) >= dataAsInt( a2 ) ) { goto label91; };
  Any a3 = Int(0);
  Any a6 = Int(0);
  return a3;
  label91: ;
  Any a7 = Int(0);
  return a0;
}

int main (){
  Any a6 = Int(1);
  Any a5 = x1x_f ( a6 );
  Any a4 = toStr ( a5 );
  println ( a4 );
  return 0;
}
