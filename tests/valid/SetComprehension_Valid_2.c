#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
Any f ( Any );

Any f ( Any a0 ){
  Any a2 = a0;
  Any a1 = toStr ( a2 );
  return a1;
}

int main (){
  Any a2 = Int(1);
  Any a3 = Int(2);
  Any a4 = Int(3);
  Any a8 = ;
  int count = a5[0];
  loop_start_label51: ;
  if(count == a5[1]){ goto label51; }
  Any a7 = Char( a5[count] );
  count++;
  Any a10 = Int(1);
  if ( dataAsInt( a7 ) <= dataAsInt( a10 ) ) { goto label52; };
