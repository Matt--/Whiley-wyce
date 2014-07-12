#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef posints;

Any x1x_f ( Any );

Any x1x_f ( Any a0 ){
  Any a2 = a0;
  Any a1 = toStr ( a2 );
  return a1;
}

int main (){
  Any a2 = Int(1);
  Any a3 = Int(2);
  Any a4 = Int(3);
  int count = 0;
  loop_start_label48: ;
  if(count == a1.i )){ goto label48; }
  Any a13 = Char( a5[count] );
  count++;
  Any a15 = Int(0);
  if ( dataAsInt( a13 ) < dataAsInt( a15 ) ) { goto label49; };
  goto loop_start_label48;
  label48: ;
  goto label50;
  label49: ;
  Any a16 = Bool(false);
  goto label51;
  label50: ;
  a16 = Bool(true);
  label51: ;
  Any a17 = Bool(true);
  Any a9 = x1x_f ( a5 );
  println ( a9 );
  return 0;
}
