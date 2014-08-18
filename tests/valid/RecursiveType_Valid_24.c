#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
Any x1x_maxDepth ( Any );

Any x1x_maxDepth ( Any a0 ){
  if(a0.type == ){ goto label56; };
  goto label57;
  label56: ;
  Any a2 = Int(0);
  Any a1 = a2;
  int count = a0[0];
  loop_start_label58: ;
  if(count == a0[1]){ goto label58; }
  Any a4 = Char( a0[count] );
  count++;
  Any a6 = x1x_maxDepth ( a4 );
  Any a5 = a6;
  if ( dataAsInt( a6 ) <= dataAsInt( a1 ) ) { goto label59; };
  Any a10 = a5;
  a1 = a10;
  label59: ;
  goto loop_start_label58;
  label58: ;
  Any a12 = Int(1);
  Any a13 = wyce_add( a1 , a12);
  return a13;
  label57: ;
  Any a14 = Int(0);
  return a14;
}

int main (){
  Any a2 = Null();
  Any a1 = a2;
  Any a5[] = {a2};
  Any a3 = a5;
  Any a8[] = {a5};
  Any a6 = a8;
  Any a11[] = {a8};
  Any a9 = a11;
  Any a17 = a1;
  Any a16 = x1x_maxDepth ( a17 );
  Any a15 = toStr ( a16 );
  println ( a15 );
  Any a23 = a3;
  Any a22 = x1x_maxDepth ( a23 );
  Any a21 = toStr ( a22 );
  println ( a21 );
  Any a29 = a6;
  Any a28 = x1x_maxDepth ( a29 );
  Any a27 = toStr ( a28 );
  println ( a27 );
  Any a35 = a9;
  Any a34 = x1x_maxDepth ( a35 );
  Any a33 = toStr ( a34 );
  println ( a33 );
  return 0;
}
