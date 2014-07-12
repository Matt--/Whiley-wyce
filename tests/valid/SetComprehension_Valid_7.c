#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"

int main (){
  Any a2 = Int(1);
  Any a3 = Int(2);
  Any a4 = Int(3);
  Any a5 = Int(4);
  Any a1 = @ignore;
  Any a8 = Int(1);
  Any a9 = Int(2);
  Any a7 = @ignore;
  Any a14 = ;
  int count = a6[0];
  loop_start_label56: ;
  if(count == a6[1]){ goto label56; }
  Any a12 = Char( a6[count] );
  count++;
  int count = a10[0];
  loop_start_label57: ;
  if(count == a10[1]){ goto label57; }
  Any a13 = Char( a10[count] );
  count++;
  Any a17 = wyce_add( a12 , a13);
