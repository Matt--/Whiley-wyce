#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef struct {Any field; } OpenRecord;

Any x1x_getField ( OpenRecord );

Any x1x_getField ( OpenRecord a0 ){
  Any a2 = a0.field;
  return a2;
}

int main (){
  Any a2 = Int(1);
  {int field} a3 = { a2 };
   a1 = a3;
   a8 = a1;
  Any a7 = x1x_getField ( a8 );
  println ( a7 );
  Any a9 = Int(2);
  Any a10 = Str("hello");
  {int field,string x} a11 = { a9, a10 };
  a1 = a11;
   a16 = a1;
  Any a15 = x1x_getField ( a16 );
  println ( a15 );
  Any a17 = Int(3);
  Any a18 = Int(1);
  Any a19 = Int(2);
  {int field,int x,int y} a20 = { a17, a18, a19 };
  a1 = a20;
   a25 = a1;
  Any a24 = x1x_getField ( a25 );
  println ( a24 );
  return 0;
}
