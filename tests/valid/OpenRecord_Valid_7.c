#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef struct {Any x; Any y; } IntPoint;
typedef struct {Any x; Any y; } RealPoint;

Any x1x_sum ( Any );

Any x1x_sum ( Any a0 ){
  if(a0.type == ){ goto label389; };
  goto label390;
  label389: ;
  Any a2 = a0.x;
  Any a4 = a0.y;
  Any a5 = wyce_add( a2 , a4);
  a5.type = REAL_TYPE;
  Any a9999 = Int(a5.i);
  a5.r = (double) a9999.i;
  return a5;
  label390: ;
  Any a7 = a0.x;
  Any a9 = a0.y;
  Any a10 = wyce_add( a7 , a9);
  return a10;
}

int main (){
  Any a2 = Int(1);
  Any a3 = Int(2);
  {int x,int y} a4 = { a2, a3 };
   a1 = a4;
   a9 = a1;
  Any a8 = x1x_sum ( a9 );
  println ( a8 );
  Any a10 = Real(1.23);
  Any a11 = Real(2.34);
  {real x,real y} a12 = { a10, a11 };
  a1 = a12;
   a17 = a1;
  Any a16 = x1x_sum ( a17 );
  println ( a16 );
  return 0;
}
