#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
Any f ( Any );

Any f ( Any a0 ){
  if(a0.type == ){ goto label10; };
  goto label11;
  label10: ;
  Any a2 = Int( sizeof( a0 ) / sizeof( a0[0] ) );
  return a2;
  label11: ;
  return a0;
}

int main (){
  Any a4 = Str("RESULT: ");
  Any a7 = Int(1);
  Any a8 = Int(2);
  Any a9 = Int(3);
  Any a10 = Int(4);
  Any a11[] = {a7, a8, a9, a10};
  Any a6 = f ( a11 );
  Any a5 = toStr ( a6 );
  Any a12 = Str( strcat ( a4.s , a5.s ) );
  println ( a12 );
  Any a16 = Str("RESULT: ");
  Any a19 = Int(123);
  Any a18 = f ( a19 );
  Any a17 = toStr ( a18 );
  Any a20 = Str( strcat ( a16.s , a17.s ) );
  println ( a20 );
  return 0;
}
