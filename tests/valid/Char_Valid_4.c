#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
Any x1x_isChar ( Any );

Any x1x_isChar ( Any a0 ){
  if(a0.type == CHAR_TYPE){ goto label8; };
  goto label9;
  label8: ;
  Any a1 = Bool(true);
  return a1;
  label9: ;
  Any a2 = Bool(false);
  return a2;
}

int main (){
  Any a6 = Char('c');
  Any a5 = x1x_isChar ( a6 );
  Any a4 = toStr ( a5 );
  println ( a4 );
  Any a12 = Int(1);
  Any a11 = x1x_isChar ( a12 );
  Any a10 = toStr ( a11 );
  println ( a10 );
  Any a18 = Int(1);
  Any a19 = Int(2);
  Any a20 = Int(3);
  Any a21[] = {a18, a19, a20};
  Any a17 = x1x_isChar ( a21 );
  Any a16 = toStr ( a17 );
  println ( a16 );
  return 0;
}
