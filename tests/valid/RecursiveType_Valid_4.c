#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef struct {Any index; Any src; } ListAccess;

Any x1x_evaluate ( Any );

Any x1x_evaluate ( Any a0 ){
  if(a0.type == REAL_TYPE){ goto label557; };
  if(a0.type == INT_TYPE){ goto label558; };
  label558: ;
  goto label559;
  label557: ;
  Any a1 = a0;
  return a1;
  label559: ;
  if(a0.type == ){ goto label558; };
  goto label560;
  Any a2 [10];
  int count = a0[0];
  loop_start_label561: ;
  if(count == a0[1]){ goto label561; }
  Any a5 = Char( a0[count] );
  count++;
  Any a7 = x1x_evaluate ( a5 );
  Any a6 = a7;
  if(a6.type == NULL_TYPE){ goto label558; };
  goto label562;
  Any a9 = a6;
  return a9;
  label562: ;
  Any a12[] = {a6};
  #### appending arrays not yet catered for;
  a2 = Null();
  goto loop_start_label561;
  label561: ;
  Any a14 = a2;
  return a14;
  label560: ;
  Any a18 = a0.src;
  Any a16 = x1x_evaluate ( a18 );
  Any a15 = a16;
  Any a22 = a0.index;
  Any a20 = x1x_evaluate ( a22 );
  Any a19 = a20;
  if(a15.type == ){ goto label558; };
  goto label563;
  if(a19.type == INT_TYPE){ goto label558; };
  goto label563;
  Any a24 = Int(0);
  if ( dataAsInt( a19 ) < dataAsInt( a24 ) ) { goto label563; };
  Any a27 = Int( sizeof( a15 ) / sizeof( a15[0] ) );
  if ( dataAsInt( a19 ) >= dataAsInt( a27 ) ) { goto label563; };
  Any a32 = Int(0);
  Any a33 = Int( sizeof( a15 ) / sizeof( a15[0] ) );
  Any a30 = a15[a19.i];
  return a30;
  label563: ;
  Any a31 = Null();
  return a31;
}

int main (){
  Any a6 = Int(123);
  Any a5 = x1x_evaluate ( a6 );
  Any a4 = toStr ( a5 );
  println ( a4 );
  Any a12 = Int(0);
  Any a13 = Int(112);
  Any a14 = Int(212332);
  Any a15 = Int(342);
  Any a16[] = {a13, a14, a15};
  {int index,[int] src} *a17 = { a12, a16 };
  Any a11 = x1x_evaluate ( a17 );
  Any a10 = toStr ( a11 );
  println ( a10 );
  Any a23 = Int(2);
  Any a24 = Int(112312);
  Any a25 = Int(289712);
  Any a26 = wyce_neg(a25);
  Any a27 = Int(312242);
  Any a28[] = {a24, a26, a27};
   *a29 = { a23, a28 };
  Any a22 = x1x_evaluate ( a29 );
  Any a21 = toStr ( a22 );
  println ( a21 );
  Any a35 = Int(123);
  Any a36 = Int(223);
  Any a37 = Int(323);
  Any a38[] = {a35, a36, a37};
  Any a34 = x1x_evaluate ( a38 );
  Any a33 = toStr ( a34 );
  println ( a33 );
  return 0;
}
