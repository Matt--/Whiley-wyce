#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
Any x1x_sum ( Any );

Any x1x_sum ( Any a0 ){
  Any a2 = Int(0);
  Any a1 = a2;
  loop_start_label65: ;
  if(a0.type == NULL_TYPE){ goto label66; };
  Any a5 = a0.data;
  Any a6 = wyce_add( a1 , a5);
  a1 = a6;
  label66: ;
  Any a8 = a0.next;
  a0 = a8;
  goto loop_start_label65;
  label65: ;
  return a1;
}

int main (){
  Any a2 = Null();
  Any a1 = a2;
  Any a6 = Str("SUM: ");
  Any a8 = a1;
  Any a7 = x1x_sum ( a8 );
  a7 = toStr ( a7 );
  Any a9 = Str( strcat ( a6.s , a7.s ) );
  println ( a9 );
  Any a10 = Int(1);
  a1 = Null();
  Any a16 = Str("SUM: ");
  Any a18 = a1;
  Any a17 = x1x_sum ( a18 );
  a17 = toStr ( a17 );
  Any a19 = Str( strcat ( a16.s , a17.s ) );
  println ( a19 );
  Any a20 = Int(2324);
  a1 = Null();
  Any a26 = Str("SUM: ");
  Any a28 = a1;
  Any a27 = x1x_sum ( a28 );
  a27 = toStr ( a27 );
  Any a29 = Str( strcat ( a26.s , a27.s ) );
  println ( a29 );
  Any a30 = Int(2);
  a1 = Null();
  Any a36 = Str("SUM: ");
  Any a38 = a1;
  Any a37 = x1x_sum ( a38 );
  a37 = toStr ( a37 );
  Any a39 = Str( strcat ( a36.s , a37.s ) );
  println ( a39 );
  return 0;
}
