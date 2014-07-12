#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
Any* x1x_play ( Any[] );
Any x1x_isAlive ( Any , Any[] );

Any* x1x_play ( Any a0[] ){
  Any a2 = a0;
  Any a1 = a2;
  Any a3 = Int(0);
  Any a5 = Int( sizeof( a0 ) / sizeof( a0[0] ) );
  a3, a5};
  int count = a6[0];
  loop_start_label56: ;
  if(count == a6[1]){ goto label56; }
  Any a7 = Char( a6[count] );
  count++;
  Any a8 = x1x_isAlive ( a7, a0 );
  Any a11 = Bool(true);
  if ( dataAsInt( a8 ) == dataAsInt( a11 ) ) { goto label57; };
  goto label58;
  label57: ;
  Any a13 = Bool(true);
  a1[a7.i] = a13;
  goto label59;
  label58: ;
  Any a15 = Bool(false);
  a1[a7.i] = a15;
  label59: ;
  goto loop_start_label56;
  label56: ;
  return a1;
}

Any x1x_isAlive ( Any a0, Any a1[] ){
  Any a3 = Int(0);
  if ( dataAsInt( a0 ) <= dataAsInt( a3 ) ) { goto label60; };
  Any a5 = Int(1);
  Any a6 = wyce_add( a0 , a5);
  Any a8 = Int( sizeof( a1 ) / sizeof( a1[0] ) );
  if ( dataAsInt( a6 ) >= dataAsInt( a8 ) ) { goto label60; };
  Any a11 = Int(1);
  Any a12 = wyce_sub( a0 , a11);
  Any a23 = Int(0);
  Any a24 = Int( sizeof( a1 ) / sizeof( a1[0] ) );
  Any a13 = a1[a12.i];
  Any a14 = Bool(true);
  if ( dataAsInt( a13 ) == dataAsInt( a14 ) ) { goto label61; };
  goto label60;
  label61: ;
  Any a17 = Int(1);
  Any a18 = wyce_add( a0 , a17);
  a23 = Int(0);
  a24 = Int( sizeof( a1 ) / sizeof( a1[0] ) );
  Any a19 = a1[a18.i];
  Any a20 = Bool(true);
  if ( dataAsInt( a19 ) == dataAsInt( a20 ) ) { goto label62; };
  goto label60;
  label62: ;
  Any a21 = Bool(true);
  return a21;
  label60: ;
  Any a22 = Bool(false);
  return a22;
}

int main (){
  Any a2 = Bool(true);
  Any a3 = Bool(true);
  Any a4 = Bool(true);
  Any a5 = Bool(true);
  Any a6 = Bool(true);
  Any a7 = Bool(true);
  Any a8 = Bool(true);
  Any a9[] = {a2, a3, a4, a5, a6, a7, a8};
  Any a1 = a9;
  Any a10 = Int(0);
  Any a11 = Int(5);
  a10, a11};
  int count = a12[0];
  loop_start_label63: ;
  if(count == a12[1]){ goto label63; }
  Any a13 = Char( a12[count] );
  count++;
  Any a17 = a1;
  println ( a17 );
  Any a18 = x1x_play ( a1 );
  a1 = a18;
  goto loop_start_label63;
  label63: ;
  return 0;
}
