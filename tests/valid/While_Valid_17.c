#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"

int main (){
  Any a2 = Int(0);
  loop_start_label61: ;
  Any a4 = Int(5);
  if ( dataAsInt( a2 ) >= dataAsInt( a4 ) ) { goto label61; };
  Any a6 = Int(3);
  if ( dataAsInt( a2 ) != dataAsInt( a6 ) ) { goto label62; };
  goto label61;
  label62: ;
  Any a8 = Int(1);
  Any a9 = wyce_add( a2, a8);
  a2 = a9;
  goto loop_start_label61;
  label61: ;
  println ( a2 );
  return 0;
}
