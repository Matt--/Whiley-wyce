#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef struct {Any data; Any next; } Link;

Any x1x_sum_1 ( Any );
Any x1x_sum_2 ( Any );
Any x1x_sum_3 ( Any );

Any x1x_sum_1 ( Any a0 ){
  if(a0.type == NULL_TYPE){ goto label38; };
  goto label39;
  label38: ;
  Any a1 = Int(0);
  return a1;
  label39: ;
  Any a3 = a0.data;
  Any a6 = a0.next;
  Any a4 = x1x_sum_1 ( a6 );
  Any a7 = wyce_add( a3 , a4);
  return a7;
}

Any x1x_sum_2 ( Any a0 ){
  if(a0.type == NULL_TYPE){ goto label40; };
  goto label41;
  label40: ;
  Any a1 = Int(0);
  return a1;
  label41: ;
  Any a3 = a0.data;
  Any a6 = a0.next;
  Any a4 = x1x_sum_2 ( a6 );
  Any a7 = wyce_add( a3 , a4);
  return a7;
}

Any x1x_sum_3 ( Any a0 ){
  if(a0.type == NULL_TYPE){ goto label42; };
  Any a2 = a0.data;
  Any a5 = a0.next;
  Any a3 = x1x_sum_3 ( a5 );
  Any a6 = wyce_add( a2 , a3);
  return a6;
  label42: ;
  Any a7 = Int(0);
  return a7;
}

int main (){
  Any a2 = Int(1);
  Any a3 = Null();
  Any a5 = Int(2);
  Any a8 = Int(3);
  Any a1 = Null();
  Any a16 = a1;
  Any a15 = x1x_sum_1 ( a16 );
  Any a14 = toStr ( a15 );
  println ( a14 );
  Any a22 = a1;
  Any a21 = x1x_sum_2 ( a22 );
  Any a20 = toStr ( a21 );
  println ( a20 );
  Any a28 = a1;
  Any a27 = x1x_sum_3 ( a28 );
  Any a26 = toStr ( a27 );
  println ( a26 );
  return 0;
}
