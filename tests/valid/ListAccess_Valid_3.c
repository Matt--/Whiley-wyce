#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
void f ( Any[] , Any );

void f ( Any a0[], Any a1 ){
  Any a6 = Int(0);
  if ( dataAsInt( a1 ) < dataAsInt( a6 ) ) { goto label50; };
  Any a9 = Int( sizeof( a0 ) / sizeof( a0[0] ) );
  if ( dataAsInt( a1 ) < dataAsInt( a9 ) ) { goto label51; };
  label50: ;
  Any a10 = Int(0);
  a1 = a10;
  label51: ;
  Any a21 = Int(0);
  Any a22 = Int( sizeof( a0 ) / sizeof( a0[0] ) );
  Any a14 = a0[a1.i];
  a21 = Int(0);
  a22 = Int( sizeof( a0 ) / sizeof( a0[0] ) );
  Any a18 = a0[a1.i];
}

int main (){
  Any a2 = Int(1);
  Any a3 = Int(2);
  Any a4 = Int(3);
  Any a5[] = {a2, a3, a4};
  Any *a1 = a5;
  Any a11 = Int( sizeof( a5 ) / sizeof( a5[0] ) );
  Any a12 = Int(0);
  a12 = a1;
  a11 = toStr ( a12 );
  println ( a11 );
  Any a18 = Int( sizeof( a5 ) / sizeof( a5[0] ) );
  Any a19 = Int(0);
  a19 = a1;
  a18 = toStr ( a19 );
  println ( a18 );
  Any a25 = Int( sizeof( a5 ) / sizeof( a5[0] ) );
  Any a26 = Int(0);
  a26 = a1;
  a25 = toStr ( a26 );
  println ( a25 );
  Any a33 = Int( sizeof( a5 ) / sizeof( a5[0] ) );
  Any a34 = Int(0);
  a34 = a1;
  a33 = toStr ( a34 );
  println ( a33 );
  Any a40 = Int( sizeof( a5 ) / sizeof( a5[0] ) );
  Any a41 = Int(0);
  return 0;
}
