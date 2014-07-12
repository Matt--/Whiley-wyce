#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
Any f ( Any[] , Any[] );
void g ( Any , Any[] , Any[] );

Any f ( Any a0[], Any a1[] ){
  Any *a2 = a0;
  if ( dataAsInt( a2 ) != dataAsInt( a1 ) ) { goto label69; };
  Any a4 = Str("EQUAL");
  return a4;
  label69: ;
  Any a5 = Str("NOT EQUAL");
  return a5;
}

void g ( Any a0, Any a1[], Any a2[] ){
  Any *a7 = a1;
  Any a6 = toStr ( a7 );
  println ( a6 );
  Any *a12 = a2;
  Any a11 = toStr ( a12 );
  println ( a11 );
  Any a16 = f ( a1, a2 );
  println ( a16 );
}

int main (){
  Any a1 = null;
  Any a2 = Int(1);
  Any a3 = Int(4);
  Any a4[] = {a2, a3};
  Any a5 = Real(1.0);
  Any a6 = Real(4.0);
  Any a7[] = {a5, a6};
  g ( a1, a4, a7 );
  Any a8 = null;
  Any a9 = Int(1);
  Any a10 = Int(4);
  Any a11[] = {a9, a10};
  Any a12 = Real(1.0);
  Any a13 = Real(4.2);
  Any a14[] = {a12, a13};
  g ( a8, a11, a14 );
  Any a15 = null;
  Any a16 [10];
  Any a17 [10];
  g ( a15, a16, a17 );
  return 0;
}
