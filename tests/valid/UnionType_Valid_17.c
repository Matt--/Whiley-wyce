#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef 
void f ( Any , Any );
void g ( Any , Any[] );

void f ( Any a0, Any a1 ){
  Any a6 = a1;
  Any a5 = toStr ( a6 );
  println ( a5 );
}

void g ( Any a0, Any a1[] ){
  Any *a6 = a1;
  Any a5 = toStr ( a6 );
  println ( a5 );
}

int main (){
  Any a2 = Int(123);
  Any a1 = a2;
  Any a3 = null;
  Any a4 = a1;
  f ( a3, a4 );
  Any a5 = Int(1);
  Any a6 = Int(2);
  Any a7 = Int(3);
  Any a8[] = {a5, a6, a7};
  a1 = a8;
  Any a9 = null;
  Any *a10 = a1;
  g ( a9, a10 );
  return 0;
}
