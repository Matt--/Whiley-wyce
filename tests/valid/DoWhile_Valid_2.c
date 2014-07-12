#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"

int main (){
  Any a2 = Int(0);
  Any a1 = a2;
  loop_start_label56: ;
  Any a4 = Int(2);
  if ( dataAsInt( a1 ) != dataAsInt( a4 ) ) { goto label57; };
  goto label56;
  label57: ;
  Any a6 = Int(1);
  Any a7 = wyce_add( a1 , a6);
  a1 = a7;
  Any a9 = Int(5);
  if ( dataAsInt( a7 ) >= dataAsInt( a9 ) ) { goto label56; };
  goto loop_start_label56;
  label56: ;
  Any a13 = a1;
  println ( a13 );
  return 0;
}
