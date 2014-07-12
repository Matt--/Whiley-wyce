#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
Any toChar ( Any );

Any toChar ( Any a0 ){
  Any a1 = toUnsignedInt ( a0 );
  return a3;
}

int main (){
  Any a1 = Int(32);
  Any a2 = Int(127);
  a1, a2};
  int count = 0;
  loop_start_label2144: ;
  if(count == arraySize.i ){ goto label2144; }
  Any a4 = a3[count];
  count++;
  Any a12 = Int(0);
  Any a14 = Int(255);
  Any a7 = toUnsignedByte ( a4 );
  Any a6 = toChar ( a7 );
  a12 = Str("CHARACTER: ");
  Any charNowStr = toStr(a6);
  a14 = Str( strcat ( a12.s , charNowStr.s ) );
  println ( a14 );
  goto loop_start_label2144;
  label2144: ;
  return 0;
}
