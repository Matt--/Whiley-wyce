#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
Any toInt ( Any[] );

Any toInt ( Any a0[] ){
  Any a2 = Int(0);
  Any a1 = a2;
  int count = a0[0];
  loop_start_label85: ;
  if(count == a0[1]){ goto label85; }
  Any a4 = Char( a0[count] );
  count++;
  Any a7 = wyce_add( a1 , a4);
  a1 = a7;
  goto loop_start_label85;
  label85: ;
  return a1;
}

int main (){
  Any a2 = Int(1);
  Any a3 = Int(2);
  Any a4 = Int(3);
  Any a5 = Int(4);
  Any a6[] = {a2, a3, a4, a5};
  Any a9 = toInt ( a6 );
  Any a8 = toStr ( a9 );
  Any a7 = a8;
  Any a14 = a7;
  println ( a14 );
  return 0;
}
