#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
Any x1x_iof ( Any , Any  );

Any x1x_iof ( Any a0, Any a1 ){
  Any a12 = Int(0);
  Any a13 = Int( strlen( a0.s) );
  Any a9 = Char( a0.s[ a1.i ] );
  a9.type = INT_TYPE;
  Any a9999 = Char(a9.c);
  a9.i = (int) a9999.c;
  Any a10 = Char('a');
  a10.type = INT_TYPE;
  a9999 = Char(a10.c);
  a10.i = (int) a9999.c;
  Any a11 = wyce_sub( a9, a10);
  return a11;
}

int main (){
  Any a6 = Str("Hello");
  Any a7 = Int(0);
  Any a11 = Int(0);
  Any a14 = Int( strlen( a6.s) );
  Any a5 = x1x_iof ( a6, a7 );
  Any a4 = toStr ( a5 );
  println ( a4 );
  Any a13 = Str("Hello");
  a14 = Int(1);
  Any a18 = Int(0);
  Any a21 = Int( strlen( a13.s) );
  Any a12 = x1x_iof ( a13, a14 );
  a11 = toStr ( a12 );
  println ( a11 );
  Any a20 = Str("Hello");
  a21 = Int(2);
  Any a25 = Int(0);
  Any a28 = Int( strlen( a20.s) );
  Any a19 = x1x_iof ( a20, a21 );
  a18 = toStr ( a19 );
  println ( a18 );
  Any a27 = Str("Hello");
  a28 = Int(3);
  Any a32 = Int(0);
  Any a35 = Int( strlen( a27.s) );
  Any a26 = x1x_iof ( a27, a28 );
  a25 = toStr ( a26 );
  println ( a25 );
  Any a34 = Str("Hello");
  a35 = Int(4);
  Any a39 = Int(0);
  Any a42 = Int( strlen( a34.s) );
  Any a33 = x1x_iof ( a34, a35 );
  a32 = toStr ( a33 );
  println ( a32 );
  return 0;
}
