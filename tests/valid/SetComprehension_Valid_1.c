#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"

int main (){
  Any a2 = Int(1);
  Any a3 = Int(2);
  Any a4 = Int(3);
  Any a5 = Int(4);
  Any a6 = Int(5);
  Any a7 = Int(6);
  Any a8 = Int(7);
  Any a9 = Int(8);
  Any a10 = Int(9);
  Any a11 = Int(10);
  Any a1 = @ignore;
  Any a15 = ;
  int count = a12[0];
  loop_start_label49: ;
  if(count == a12[1]){ goto label49; }
  Any a14 = Char( a12[count] );
  count++;
  Any a17 = Int(2);
  Any a33 = Int(0);
  Any a18 = wyce_div( a14 , a17);
  Any a19 = Int(2);
  Any a20 = wyce_mul( a18 , a19);
  if ( dataAsInt( a20 ) != dataAsInt( a14 ) ) { goto label50; };
