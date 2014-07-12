#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
Any f ( Any );

Any f ( Any a0 ){
  Any a3 = Int(2);
  Any a4 = add( a0 , a3);
  Any a5 = Tuple( a0, a4);
  return a5;
}

int main (){
  Any a3 = Int(1);
  Any a2 = f ( a3 );
  Any a4 = Int( ((Any**)a2.ptr)[0]->i);
  Any a5 = Int( ((Any**)a2.ptr)[1]->i);
  Any a10 = a4;
  Any a9 = toStr ( a10 );
  println ( a9 );
  Any a15 = a5;
  Any a14 = toStr ( a15 );
  println ( a14 );
  return 0;
}
