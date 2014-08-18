#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
Any x1x_f ( Any  );

Any x1x_f ( Any a0 ){
  Any a2 = Int(10);
  if ( dataAsInt( a0 ) >= dataAsInt( a2 ) ) { goto label4; };
  Any a3 = Str("LESS THAN");
  return a3;
  label4: ;
  Any a5 = Int(10);
  if ( dataAsInt( a0 ) <= dataAsInt( a5 ) ) { goto label5; };
  Any a6 = Str("GREATER THAN");
  return a6;
  label5: ;
  Any a7 = Str("EQUALS");
  return a7;
}

int main (){
  Any a5 = Int(1);
  Any a4 = x1x_f ( a5 );
  println ( a4 );
  Any a10 = Int(10);
  Any a9 = x1x_f ( a10 );
  println ( a9 );
  Any a15 = Int(11);
  Any a14 = x1x_f ( a15 );
  println ( a14 );
  Any a20 = Int(1212);
  Any a19 = x1x_f ( a20 );
  println ( a19 );
  Any a25 = Int(1212);
  Any a26 = wyce_neg(a25);
  Any a24 = x1x_f ( a26 );
  println ( a24 );
  return 0;
}
