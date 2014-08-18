#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef int anat;
typedef int bnat;

Any x1x_atob ( Any  );
Any x1x_btoa ( Any  );

Any x1x_atob ( Any a0 ){
  return a0;
}

Any x1x_btoa ( Any a0 ){
  return a0;
}

int main (){
  Any a2 = Int(1);
  Any a7 = x1x_atob ( a2 );
  Any a6 = toStr ( a7 );
  println ( a6 );
  Any a13 = x1x_btoa ( a2 );
  Any a12 = toStr ( a13 );
  println ( a12 );
  return 0;
}
