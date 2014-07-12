#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef int nat;

Any* g ( Any[] );
Any* f ( Any[] );

Any* g ( Any a0[] ){
  int count = 0;
  loop_start_label27: ;
  if(count == a1.i )){ goto label27; }
  Any a3 = Char( a0[count] );
  count++;
  Any a5 = Int(0);
  goto loop_start_label27;
  label27: ;
  return a0;
}

Any* f ( Any a0[] ){
  int count = 0;
  loop_start_label30: ;
  if(count == a1.i )){ goto label30; }
  Any a5 = Char( a0[count] );
  count++;
  Any a7 = Int(0);
  goto loop_start_label30;
  label30: ;
  Any *a1 = g ( a0 );
  int count = 0;
  loop_start_label31: ;
  if(count == a1.i )){ goto label31; }
  Any a3 = Char( a1[count] );
  count++;
  a5 = Int(0);
  goto loop_start_label31;
  label31: ;
  return a1;
}

int main (){
  Any a3 = Int(1);
  Any a4 = Int(2);
  Any a5 = Int(3);
  Any a6[] = {a3, a4, a5};
  int count = 0;
  loop_start_label32: ;
  if(count == a1.i )){ goto label32; }
  Any a9 = Char( a6[count] );
  count++;
  Any a11 = Int(0);
  goto loop_start_label32;
  label32: ;
  Any *a2 = f ( a6 );
  Any *a1 = a2;
  a11 = a1;
  Any a10 = toStr ( a11 );
  println ( a10 );
  return 0;
}
