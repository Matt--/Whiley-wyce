#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
Any x1x_f ( Any  );

Any x1x_f ( Any a0 ){
  Any a2 = Char('9');
  if ( dataAsInt( a0 ) <= dataAsInt( a2 ) ) { goto label147; };
  Any a3 = Bool(false);
  goto label148;
  label147: ;
  a3 = Bool(true);
  label148: ;
  return a3;
}

int main (){
  Any a3 = Char('0');
  Any a2 = x1x_f ( a3 );
  Any a7 = toStr ( a2 );
  println ( a7 );
  Any a10 = Char('1');
  Any a9 = x1x_f ( a10 );
  a2 = a9;
  Any a14 = toStr ( a2 );
  println ( a14 );
  Any a17 = Char('2');
  Any a16 = x1x_f ( a17 );
  a2 = a16;
  Any a21 = toStr ( a2 );
  println ( a21 );
  Any a24 = Char('3');
  Any a23 = x1x_f ( a24 );
  a2 = a23;
  Any a28 = toStr ( a2 );
  println ( a28 );
  Any a31 = Char('4');
  Any a30 = x1x_f ( a31 );
  a2 = a30;
  Any a35 = toStr ( a2 );
  println ( a35 );
  Any a38 = Char('5');
  Any a37 = x1x_f ( a38 );
  a2 = a37;
  Any a42 = toStr ( a2 );
  println ( a42 );
  Any a45 = Char('6');
  Any a44 = x1x_f ( a45 );
  a2 = a44;
  Any a49 = toStr ( a2 );
  println ( a49 );
  Any a52 = Char('7');
  Any a51 = x1x_f ( a52 );
  a2 = a51;
  Any a56 = toStr ( a2 );
  println ( a56 );
  Any a59 = Char('8');
  Any a58 = x1x_f ( a59 );
  a2 = a58;
  Any a63 = toStr ( a2 );
  println ( a63 );
  Any a66 = Char('9');
  Any a65 = x1x_f ( a66 );
  a2 = a65;
  Any a70 = toStr ( a2 );
  println ( a70 );
  Any a73 = Char('a');
  Any a72 = x1x_f ( a73 );
  a2 = a72;
  Any a77 = toStr ( a2 );
  println ( a77 );
  Any a80 = Char('b');
  Any a79 = x1x_f ( a80 );
  a2 = a79;
  Any a84 = toStr ( a2 );
  println ( a84 );
  Any a87 = Char('c');
  Any a86 = x1x_f ( a87 );
  a2 = a86;
  Any a91 = toStr ( a2 );
  println ( a91 );
  Any a94 = Char('d');
  Any a93 = x1x_f ( a94 );
  a2 = a93;
  Any a98 = toStr ( a2 );
  println ( a98 );
  Any a101 = Char('e');
  Any a100 = x1x_f ( a101 );
  a2 = a100;
  Any a105 = toStr ( a2 );
  println ( a105 );
  return 0;
}
