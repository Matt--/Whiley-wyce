#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"

int main (){
  Any a2 = Int(0);
  Any a1 = a2;
  loop_start_label58: ;
  Any a4 = Int(2);
  if ( dataAsInt( a1 ) != dataAsInt( a4 ) ) { goto label59; };
  goto label58;
  label59: ;
  Any a6 = Int(1);
  Any a7 = wyce_add( a1 , a6);
  a1 = a7;
  Any a9 = Int(5);
  if ( dataAsInt( a7 ) >= dataAsInt( a9 ) ) { goto label58; };
  goto loop_start_label58;
  label58: ;
  Any a13 = a1;
  println ( a13 );
  return 0;
}
