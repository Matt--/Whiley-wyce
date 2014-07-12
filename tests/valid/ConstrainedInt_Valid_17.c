#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef int anat;
typedef int bnat;

Any x1x_atob ( Any );
Any x1x_btoa ( Any );

Any x1x_atob ( Any a0 ){
  Any a3 = Int(2);
  Any a5 = wyce_mul( a3 , a0);
  return a0;
}

Any x1x_btoa ( Any a0 ){
  Any a4 = Int(0);
  return a0;
}

int main (){
  Any a2 = Int(1);
  Any a12 = Int(0);
  Any a7 = x1x_atob ( a2 );
  Any a6 = toStr ( a7 );
  println ( a6 );
  Any a17 = Int(2);
  Any a19 = wyce_mul( a17 , a2);
  Any a13 = x1x_btoa ( a2 );
  a12 = toStr ( a13 );
  println ( a12 );
  return 0;
}
