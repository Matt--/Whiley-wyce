#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef struct {Any op; } IntList;


int main (){
  Any a2 = Int(1);
  Any a1 = Null();
  Any a4 = Int(1);
  a1.op = a4;
  Any a6 = a1;
  Any a5 = a6;
  Any a11 = a5;
  Any a10 = toStr ( a11 );
  println ( a10 );
  Any a12 = Int(1);
  Any a13 = Int(2);
  Any a14 = Int(3);
  Any a15[] = {a12, a13, a14};
  a1 = Null();
  Any *a21 = a1;
  Any a20 = toStr ( a21 );
  println ( a20 );
  return 0;
}
