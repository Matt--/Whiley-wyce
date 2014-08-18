#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
Any x1x_iof ( Any );

Any x1x_iof ( Any a0 ){
  Any a1 = Str("");
  Any a2 = ;
  Any a4 = Int(6);
  Any a5 = wyce_mod( a0 , a4);
  Any a14 = Int(0);
  Any a15 = Int( sizeof( a2 ) / sizeof( a2[0] ) );
  Any a6 = a2[a5.i];
  Any charNowStr = toStr(a6);
  Any a7 = Str( strcat ( a1.s , charNowStr.s ) );
  Any a8 = ;
  Any a10 = Int(10);
  Any a11 = wyce_mod( a0 , a10);
  a14 = Int(0);
  a15 = Int( sizeof( a8 ) / sizeof( a8[0] ) );
  Any a12 = a8[a11.i];
  Any charNowStr = toStr(a12);
  Any a13 = Str( strcat ( a7.s , charNowStr.s ) );
  return a13;
}

int main (){
  Any a1 = Int(0);
  Any a2 = Int(100);
  a1, a2};
  int count = 0;
  loop_start_label148: ;
  if(count == a1.i )){ goto label148; }
  Any a4 = Char( a3[count] );
  count++;
  Any a9 = x1x_iof ( a4 );
  Any a8 = toStr ( a9 );
  println ( a8 );
  goto loop_start_label148;
  label148: ;
  return 0;
}
