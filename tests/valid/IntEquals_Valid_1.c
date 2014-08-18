#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
Any x1x_f ( Any , Any  );

Any x1x_f ( Any a0, Any a1 ){
  a0.type = REAL_TYPE;
  Any a9999 = Int(a0.i);
  a0.r = (double) a9999.i;
  if ( dataAsInt( a0 ) != dataAsInt( a1 ) ) { goto label176; };
  Any a4 = Str("EQUAL");
  return a4;
  label176: ;
  Any a5 = Str("NOT EQUAL");
  return a5;
}

int main (){
  Any a5 = Int(1);
  Any a6 = Real(4.0);
  Any a4 = x1x_f ( a5, a6 );
  println ( a4 );
  Any a11 = Int(1);
  Any a12 = Real(4.2);
  Any a10 = x1x_f ( a11, a12 );
  println ( a10 );
  Any a17 = Int(0);
  Any a18 = Real(0);
  Any a16 = x1x_f ( a17, a18 );
  println ( a16 );
  return 0;
}
