#define LIBRARY_TESTING true

#include "../cCompiler/mattCompiler.h"
#include "../cCompiler/mattCompiler_library.c"

int main (){
  Any a2 = Int(0);
  Any a1 = a2;
  loop_start_label129: ;
  Any a4 = Int(5);
  if ( dataAsInt( a1 ) >= dataAsInt( a4 ) ) { goto label129; };
  Any a8 = a1;
  println ( a8 );
  Any a10 = Int(1);
  Any a11 = add( a1 , a10);
  a1 = a11;
  goto loop_start_label129;
  label129: ;
  return 0;
}
