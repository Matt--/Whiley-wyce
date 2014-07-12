#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef record XXX wmcr6tup;

Any get ( );
Any f ( Any );

Any get (){
  Any a0 = Int(1);
  return a0;
}

Any f ( Any a0 ){
  Any a2 = get (  );
  return a3;
}

int main (){
  Any a6 = Int(1);
  Any a5 = f ( a6 );
  Any a4 = toStr ( a5 );
  println ( a4 );
  return 0;
}
