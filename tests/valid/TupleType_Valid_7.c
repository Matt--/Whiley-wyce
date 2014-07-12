#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef 
Any f ( Any );
Any g ( Any );

Any f ( Any a0 ){
  Any a2 = Int(0);
  if ( dataAsInt( a0 ) >= dataAsInt( a2 ) ) { goto label72; };
  Any a3 = Int(1);
  Any a4 = Int(2);
  Any a5 = Tuple( a3, a4);
  return a5;
  label72: ;
  Any a6 = Real(1.2);
  Any a7 = Real(2.3);
  Any a8 = Tuple( a6, a7);
  return a8;
}

Any g ( Any a0 ){
  Any a1 = f ( a0 );
  return a1;
}

int main (){
  Any a3 = Int(1);
  Any a4 = neg(a3);
  Any a2 = g ( a4 );
  Any a5 = Int( ((Any**)a2.ptr)[0]->i);
  Any a6 = Int( ((Any**)a2.ptr)[1]->i);
  Any a10 = Str("X=");
  Any a11 = a5;
  a11 = toStr ( a11 );
  Any a12 = Str( strcat ( a10.s , a11.s ) );
  Any a13 = Str(",Y=");
  Any a14 = Str( strcat ( a12.s , a13.s ) );
  Any a15 = a6;
  a15 = toStr ( a15 );
  Any a16 = Str( strcat ( a14.s , a15.s ) );
  println ( a16 );
  Any a18 = Int(2);
  Any a17 = g ( a18 );
  a5 = Int( ((Any**)a17.ptr)[0]->i);
  a6 = Int( ((Any**)a17.ptr)[1]->i);
  Any a22 = Str("X=");
  Any a23 = a5;
  a23 = toStr ( a23 );
  Any a24 = Str( strcat ( a22.s , a23.s ) );
  Any a25 = Str(",Y=");
  Any a26 = Str( strcat ( a24.s , a25.s ) );
  Any a27 = a6;
  a27 = toStr ( a27 );
  Any a28 = Str( strcat ( a26.s , a27.s ) );
  println ( a28 );
  return 0;
}
