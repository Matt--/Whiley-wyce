#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef struct {Any x; Any y; } Point;

Any x1x_sum ( Any );

Any x1x_sum ( Any a0 ){
  if(a0.type == ){ goto label383; };
  goto label384;
  label383: ;
  Any a2 = a0.x;
  Any a4 = a0.y;
  Any a5 = wyce_add( a2 , a4);
  return a5;
  label384: ;
  Any a7 = Int(0);
  Any a6 = a7;
  int count = a0[0];
  loop_start_label385: ;
  if(count == a0[1]){ goto label385; }
  Any a9 = Char( a0[count] );
  count++;
  Point a12 = a9;
  Any a11 = x1x_sum ( a12 );
  Any a13 = wyce_add( a6 , a11);
  a6 = a13;
  goto loop_start_label385;
  label385: ;
  return a6;
}

int main (){
  Any a2 = Int(1);
  Any a3 = Int(2);
  {int x,int y} a4 = { a2, a3 };
   a1 = a4;
   a9 = a1;
  Any a8 = x1x_sum ( a9 );
  println ( a8 );
  Any a10 = Int(1);
  Any a11 = Int(2);
   a12 = { a10, a11 };
  Any a13 = Int(1);
  Any a14 = Int(2);
   a15 = { a13, a14 };
  Any a16[] = {a12, a15};
  a1 = a16;
  Any a21 = a1;
  Any a20 = x1x_sum ( a21 );
  println ( a20 );
  return 0;
}
