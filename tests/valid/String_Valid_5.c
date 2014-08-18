#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
Any x1x_indexOf ( Any , Any  );

Any x1x_indexOf ( Any a0, Any a1 ){
  Any a3 = Int(0);
  int count = 0;
  loop_start_label183: ;
  if(count == strlen(a1.s) ){ goto label183; }
  Any a5 = Char( a1.s[count] );
  count++;
  if ( dataAsInt( a0 ) != dataAsInt( a5 ) ) { goto label184; };
  return a3;
  label184: ;
  Any a10 = Int(1);
  Any a11 = wyce_add( a3, a10);
  a3 = a11;
  goto loop_start_label183;
  label183: ;
  Any a12 = Null();
  return a12;
}

int main (){
  Any a6 = Char('H');
  Any a7 = Str("Hello World");
  Any a5 = x1x_indexOf ( a6, a7 );
  Any a4 = toStr ( a5 );
  println ( a4 );
  Any a13 = Char('e');
  Any a14 = Str("Hello World");
  Any a12 = x1x_indexOf ( a13, a14 );
  Any a11 = toStr ( a12 );
  println ( a11 );
  Any a20 = Char('l');
  Any a21 = Str("Hello World");
  Any a19 = x1x_indexOf ( a20, a21 );
  Any a18 = toStr ( a19 );
  println ( a18 );
  Any a27 = Char('o');
  Any a28 = Str("Hello World");
  Any a26 = x1x_indexOf ( a27, a28 );
  Any a25 = toStr ( a26 );
  println ( a25 );
  Any a34 = Char(' ');
  Any a35 = Str("Hello World");
  Any a33 = x1x_indexOf ( a34, a35 );
  Any a32 = toStr ( a33 );
  println ( a32 );
  Any a41 = Char('W');
  Any a42 = Str("Hello World");
  Any a40 = x1x_indexOf ( a41, a42 );
  Any a39 = toStr ( a40 );
  println ( a39 );
  Any a48 = Char('r');
  Any a49 = Str("Hello World");
  Any a47 = x1x_indexOf ( a48, a49 );
  Any a46 = toStr ( a47 );
  println ( a46 );
  Any a55 = Char('d');
  Any a56 = Str("Hello World");
  Any a54 = x1x_indexOf ( a55, a56 );
  Any a53 = toStr ( a54 );
  println ( a53 );
  Any a62 = Char('z');
  Any a63 = Str("Hello World");
  Any a61 = x1x_indexOf ( a62, a63 );
  Any a60 = toStr ( a61 );
  println ( a60 );
  Any a69 = Char('1');
  Any a70 = Str("Hello World");
  Any a68 = x1x_indexOf ( a69, a70 );
  Any a67 = toStr ( a68 );
  println ( a67 );
  return 0;
}
