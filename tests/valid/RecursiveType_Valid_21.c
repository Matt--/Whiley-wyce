#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef struct {Any data; Any next; } Link;

Any x1x_sum ( Any );

Any x1x_sum ( Any a0 ){
  if(a0.type == NULL_TYPE){ goto label83; };
  goto label84;
  label83: ;
  Any a1 = Int(0);
  return a1;
  label84: ;
  Any a3 = a0.data;
  Any a6 = a0.next;
  Any a4 = x1x_sum ( a6 );
  Any a7 = wyce_add( a3 , a4);
  return a7;
}

int main (){
  Any a2 = Int(1);
  Any a3 = Null();
  Any a1 = Null();
  Any a6 = Int(2);
  Any a5 = Null();
  Any a10 = Int(3);
  Any a9 = Null();
  Any a18 = a1;
  Any a17 = x1x_sum ( a18 );
  Any a16 = toStr ( a17 );
  println ( a16 );
  Any a24 = a5;
  Any a23 = x1x_sum ( a24 );
  Any a22 = toStr ( a23 );
  println ( a22 );
  Any a30 = a9;
  Any a29 = x1x_sum ( a30 );
  Any a28 = toStr ( a29 );
  println ( a28 );
  return 0;
}
