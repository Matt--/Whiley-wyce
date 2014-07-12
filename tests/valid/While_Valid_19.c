#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
const int SIZE = 5 ;


int main (){
  Any a1 [10];
  loop_start_label67: ;
  Any a4 = Int( sizeof( a1 ) / sizeof( a1[0] ) );
  Any a5 = Int(5);
  if ( dataAsInt( a4 ) >= dataAsInt( a5 ) ) { goto label67; };
  Any a8 = ;
  #### appending arrays not yet catered for;
  a1 = null;
  goto loop_start_label67;
  label67: ;
  Any a13 = a1;
  println ( a13 );
  return 0;
}
