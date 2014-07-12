#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"

int main (){
  Any a2 = Int(0);
  Any a1 = a2;
  loop_start_label64: ;
  Any a4 = Int(5);
  if ( dataAsInt( a1 ) >= dataAsInt( a4 ) ) { goto label64; };
  Any a6 = Int(3);
  if ( dataAsInt( a1 ) != dataAsInt( a6 ) ) { goto label65; };
  goto label64;
  label65: ;
  Any a8 = Int(1);
  Any a9 = wyce_add( a1 , a8);
  a1 = a9;
  goto loop_start_label64;
  label64: ;
  Any a13 = a1;
  println ( a13 );
  return 0;
}
