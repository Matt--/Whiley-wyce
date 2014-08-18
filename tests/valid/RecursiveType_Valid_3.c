#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef struct {Any index; Any src; } ListAccess;

Any x1x_evaluate ( Any );

Any x1x_evaluate ( Any a0 ){
  if(a0.type == REAL_TYPE){ goto label551; };
  if(a0.type == INT_TYPE){ goto label552; };
  label552: ;
  goto label553;
  label551: ;
  Any a1 = a0;
  return a1;
  label553: ;
  if(a0.type == ){ goto label552; };
  goto label554;
  Any a2 [10];
  int count = a0[0];
  loop_start_label555: ;
  if(count == a0[1]){ goto label555; }
  Any a5 = Char( a0[count] );
  count++;
  Any a7 = x1x_evaluate ( a5 );
  Any a9[] = {a7};
  #### appending arrays not yet catered for;
  a2 = Null();
  goto loop_start_label555;
  label555: ;
  Any a11 = a2;
  return a11;
  label554: ;
  Any a15 = a0.src;
  Any a13 = x1x_evaluate ( a15 );
  Any a12 = a13;
  Any a19 = a0.index;
  Any a17 = x1x_evaluate ( a19 );
  Any a16 = a17;
  if(a12.type == ){ goto label552; };
  goto label556;
  if(a16.type == INT_TYPE){ goto label552; };
  goto label556;
  Any a21 = Int(0);
  if ( dataAsInt( a16 ) < dataAsInt( a21 ) ) { goto label556; };
  Any a24 = Int( sizeof( a12 ) / sizeof( a12[0] ) );
  if ( dataAsInt( a16 ) >= dataAsInt( a24 ) ) { goto label556; };
  Any a29 = Int(0);
  Any a30 = Int( sizeof( a12 ) / sizeof( a12[0] ) );
  Any a27 = a12[a16.i];
  return a27;
  label556: ;
  Any a28 = Null();
  return a28;
}

int main (){
  Any a6 = Int(1);
  Any a5 = x1x_evaluate ( a6 );
  Any a4 = toStr ( a5 );
  println ( a4 );
  Any a12 = Int(0);
  Any a13 = Int(112);
  Any a14 = Int(212);
  Any a15 = Int(342);
  Any a16[] = {a13, a14, a15};
  {int index,[int] src} *a17 = { a12, a16 };
  Any a11 = x1x_evaluate ( a17 );
  Any a10 = toStr ( a11 );
  println ( a10 );
  Any a23 = Int(2);
  Any a24 = Int(112312);
  Any a25 = Int(289712);
  Any a26 = Int(31231242);
  Any a27[] = {a24, a25, a26};
   *a28 = { a23, a27 };
  Any a22 = x1x_evaluate ( a28 );
  Any a21 = toStr ( a22 );
  println ( a21 );
  Any a34 = Int(1);
  Any a35 = Int(2);
  Any a36 = Int(3);
  Any a37[] = {a34, a35, a36};
  Any a33 = x1x_evaluate ( a37 );
  Any a32 = toStr ( a33 );
  println ( a32 );
  return 0;
}
