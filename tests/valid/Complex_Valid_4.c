#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
Any x1x_BTree ( );
Any x1x_add ( Any , Any );
Any x1x_contains ( Any , Any );

Any x1x_BTree (){
  Any a0 = Null();
  return a0;
}

Any x1x_add ( Any a0, Any a1 ){
  if(a0.type == NULL_TYPE){ goto label296; };
  goto label297;
  label296: ;
  Any a3 = Null();
  Any a4 = Null();
  {int item,null left,null right} a5 = { a1, a3, a4 };
  a0 = a5;
  goto label298;
  label297: ;
  Any a8 = a0.item;
  if ( dataAsInt( a1 ) >= dataAsInt( a8 ) ) { goto label299; };
  Any a11 = a0.left;
  Any a9 = x1x_add ( a11, a1 );
  a0.left = a9;
  goto label298;
  label299: ;
  Any a15 = a0.right;
  Any a13 = x1x_add ( a15, a1 );
  a0.right = a13;
  label298: ;
  Any a17 = a0;
  return a17;
}

Any x1x_contains ( Any a0, Any a1 ){
  if(a0.type == NULL_TYPE){ goto label300; };
  goto label301;
  label300: ;
  Any a2 = Bool(false);
  return a2;
  label301: ;
  Any a4 = a0.item;
  if ( dataAsInt( a4 ) != dataAsInt( a1 ) ) { goto label302; };
  Any a6 = Bool(true);
  return a6;
  label302: ;
  Any a9 = a0.item;
  if ( dataAsInt( a1 ) >= dataAsInt( a9 ) ) { goto label303; };
  Any a12 = a0.left;
  Any a10 = x1x_contains ( a12, a1 );
  return a10;
  label303: ;
  Any a16 = a0.right;
  Any a14 = x1x_contains ( a16, a1 );
  return a14;
}

int main (){
  Any a2 = x1x_BTree (  );
  Any a1 = a2;
  Any a3 = ;
  int count = a3[0];
  loop_start_label304: ;
  if(count == a3[1]){ goto label304; }
  Any a4 = Char( a3[count] );
  count++;
  Any a5 = x1x_add ( a1, a4 );
  a1 = a5;
  goto loop_start_label304;
  label304: ;
  Any a8 = ;
  int count = 0;
  loop_start_label305: ;
  if(count == a1.i )){ goto label305; }
  Any a9 = Char( a8[count] );
  count++;
  Any a10 = x1x_contains ( a1, a9 );
  Any a13 = Bool(true);
  if ( dataAsInt( a10 ) == dataAsInt( a13 ) ) { goto label306; };
  goto label307;
  label306: ;
  Any a17 = Str("TREE CONTAINS: ");
  Any a18 = a9;
  a18 = toStr ( a18 );
  Any a19 = Str( strcat ( a17.s , a18.s ) );
  println ( a19 );
  goto label308;
  label307: ;
  Any a23 = Str("TREE DOES NOT CONTAIN: ");
  Any a24 = a9;
  a24 = toStr ( a24 );
  Any a25 = Str( strcat ( a23.s , a24.s ) );
  println ( a25 );
  label308: ;
  goto loop_start_label305;
  label305: ;
  return 0;
}
