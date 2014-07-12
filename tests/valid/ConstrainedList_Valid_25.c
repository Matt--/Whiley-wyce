#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
Any indexOf ( Any[] , Any );

Any indexOf ( Any a0[], Any a1 ){
  Any a15 = Int(0);
  Any a16 = Int( sizeof( a0 ) / sizeof( a0[0] ) );
  Any a14 = a0[a1.i];
  return a14;
}

int main (){
  Any a2 = Int(5);
  Any a3 = Int(4);
  Any a4 = Int(6);
  Any a5 = Int(3);
  Any a6 = Int(7);
  Any a7 = Int(2);
  Any a8 = Int(8);
  Any a9 = Int(1);
  Any a10[] = {a2, a3, a4, a5, a6, a7, a8, a9};
  Any a11 = Int(0);
  Any a13 = Int( sizeof( a10 ) / sizeof( a10[0] ) );
  a11, a13};
  int count = 0;
  loop_start_label223: ;
  if(count == a1.i )){ goto label223; }
  Any a15 = Char( a14[count] );
  count++;
  int count = 0;
  loop_start_label224: ;
  if(count == a1.i )){ goto label224; }
  Any a24 = Char( a10[count] );
  count++;
  Any a26 = Int(0);
  if ( dataAsInt( a24 ) < dataAsInt( a26 ) ) { goto label225; };
  goto loop_start_label224;
  label224: ;
  goto label226;
  label225: ;
  Any a27 = Bool(false);
  goto label227;
  label226: ;
  a27 = Bool(true);
  label227: ;
  Any a28 = Bool(true);
  Any a30 = Int(0);
  Any a33 = Int( sizeof( a10 ) / sizeof( a10[0] ) );
  Any a19 = indexOf ( a10, a15 );
  println ( a19 );
  goto loop_start_label223;
  label223: ;
  return 0;
}
