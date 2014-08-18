#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef int sr8nat;
typedef struct {Any f; Any g; } sr8tup;


int main (){
  Any a2 = Int(1);
  Any a3 = Int(3);
  sr8tup a4 = { a2, a3 };
  Any a5 = Int(4);
  Any a6 = Int(8);
  sr8tup a7 = { a5, a6 };
  Any a8[] = {a4, a7};
  Any a1 = a8;
  Any a9 = Int(0);
  Any a10 = Int(2);
  a1[a9.i] = a10;
  Any a15 = a1;
  Any a14 = toStr ( a15 );
  println ( a14 );
  return 0;
}
