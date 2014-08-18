#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef struct {Any x; Any y; } Point;

Any x1x_sum ( Any );

Any x1x_sum ( Any a0 ){
  if(a0.type == ){ goto label386; };
  goto label387;
  label386: ;
  Any a2 = Int(0);
  Any a1 = a2;
  int count = a0[0];
  loop_start_label388: ;
  if(count == a0[1]){ goto label388; }
  Any a4 = Char( a0[count] );
  count++;
  Point a7 = a4;
  Any a6 = x1x_sum ( a7 );
  Any a8 = wyce_add( a1 , a6);
  a1 = a8;
  goto loop_start_label388;
  label388: ;
  return a1;
  label387: ;
  Any a11 = a0.x;
  Any a13 = a0.y;
  Any a14 = wyce_add( a11 , a13);
  return a14;
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
