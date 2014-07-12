#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef int nat;

Any sum ( Any[] );

Any sum ( Any a0[] ){
  Any a2 = Int(0);
  Any a1 = a2;
  Any a4 = Int(0);
  int count = a0[0];
  loop_start_label417: ;
  if(count == a0[1]){ goto label417; }
  Any a6 = Char( a0[count] );
  count++;
  Any a8 = Int(0);
  Any a10 = Int(0);
  Any a13 = wyce_add( a1 , a6);
  a1 = a13;
  Any a15 = Int(0);
  goto loop_start_label417;
  label417: ;
  Any a19 = Int(0);
  return a1;
}

int main (){
  Any a3 = Int(0);
  Any a4 = Int(1);
  Any a5 = Int(2);
  Any a6 = Int(3);
  Any a7[] = {a3, a4, a5, a6};
  int count = 0;
  loop_start_label418: ;
  if(count == a1.i )){ goto label418; }
  Any a10 = Char( a7[count] );
  count++;
  Any a12 = Int(0);
  goto loop_start_label418;
  label418: ;
  Any a2 = sum ( a7 );
  Any a1 = a2;
  a12 = a1;
  Any a11 = toStr ( a12 );
  println ( a11 );
  return 0;
}
