#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"

int main (){
  Any a2 = Int(0);
  loop_start_label59: ;
  Any a4 = Int(2);
  if ( dataAsInt( a2 ) != dataAsInt( a4 ) ) { goto label60; };
  goto label59;
  label60: ;
  Any a6 = Int(1);
  Any a7 = wyce_add( a2, a6);
  a2 = a7;
  Any a9 = Int(5);
  if ( dataAsInt( a7 ) >= dataAsInt( a9 ) ) { goto label59; };
  goto loop_start_label59;
  label59: ;
  println ( a2 );
  return 0;
}
