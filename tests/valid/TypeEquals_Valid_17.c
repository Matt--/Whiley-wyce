#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
Any f ( Any );

Any f ( Any a0 ){
  if(a0.type == REAL_TYPE){ goto label20; };
  goto label21;
  label20: ;
  Any a1 = Int(0);
  return a1;
  label21: ;
  Any a3 = Int( sizeof( a0 ) / sizeof( a0[0] ) );
  return a3;
}

int main (){
  Any a6 = Int(123);
  Any a5 = f ( a6 );
  Any a4 = toStr ( a5 );
  println ( a4 );
  Any a12 = Real(1.23);
  Any a11 = f ( a12 );
  Any a10 = toStr ( a11 );
  println ( a10 );
  Any a18 = Int(1);
  Any a19 = Int(2);
  Any a20 = Int(3);
  Any a21[] = {a18, a19, a20};
  Any a17 = f ( a21 );
  Any a16 = toStr ( a17 );
  println ( a16 );
  return 0;
}
