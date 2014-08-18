#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef int ir1nat;
typedef int pir1nat;

Any x1x_f ( Any  );

Any x1x_f ( Any a0 ){
  Any a2 = Int(2);
  if ( dataAsInt( a0 ) <= dataAsInt( a2 ) ) { goto label151; };
  Any a5 = toStr ( a0 );
  return a5;
  label151: ;
  Any a7 = Str("");
  return a7;
}

int main (){
  Any a5 = Int(1);
  Any a4 = x1x_f ( a5 );
  println ( a4 );
  Any a10 = Int(2);
  Any a9 = x1x_f ( a10 );
  println ( a9 );
  Any a15 = Int(3);
  Any a14 = x1x_f ( a15 );
  println ( a14 );
  return 0;
}
