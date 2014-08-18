#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef int Leaf;
typedef struct {Any next; } Link;

Any x1x_dist ( Any );

Any x1x_dist ( Any a0 ){
  Any a2 = Int(0);
  Any a1 = a2;
  label62: ;
  loop_start_label61: ;
  if(a0.type == ){ goto label62; };
  goto label61;
  Any a4 = a0.next;
  a0 = a4;
  Any a6 = Int(1);
  Any a7 = wyce_add( a1 , a6);
  a1 = a7;
  goto loop_start_label61;
  label61: ;
  Any a10 = wyce_add( a0 , a1);
  return a10;
}

int main (){
  Any a2 = Int(123);
  Any a1 = Null();
  Any a10 = Str("DISTANCE: ");
  Any a12 = a1;
  Any a11 = x1x_dist ( a12 );
  a11 = toStr ( a11 );
  Any a13 = Str( strcat ( a10.s , a11.s ) );
  println ( a13 );
  a1 = Null();
  Any a21 = Str("DISTANCE: ");
  Any a23 = a1;
  Any a22 = x1x_dist ( a23 );
  a22 = toStr ( a22 );
  Any a24 = Str( strcat ( a21.s , a22.s ) );
  println ( a24 );
  return 0;
}
