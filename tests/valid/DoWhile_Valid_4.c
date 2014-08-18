#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef int Leaf;
typedef struct {Any next; } Link;

Any x1x_dist ( Link );

Any x1x_dist ( Link a0 ){
  Link a2 = a0;
  Link a1 = a2;
  label125: ;
  Any a4 = Int(0);
  Any a3 = a4;
  loop_start_label124: ;
  Any a6 = a1.next;
  a1 = a6;
  Any a8 = Int(1);
  Any a9 = wyce_add( a3 , a8);
  a3 = a9;
  if(a1.type == ){ goto label125; };
  goto label124;
  goto loop_start_label124;
  label124: ;
  Any a12 = wyce_add( a1 , a3);
  return a12;
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
