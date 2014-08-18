#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef struct {Any read; } Reader;

Any x1x_f ( Any  );
Any x1x_m ( Reader , Any  );

Any x1x_f ( Any a0 ){
  Any a1 = Int(1);
  return a1;
}

Any x1x_m ( Reader a0, Any a1 ){
  Any a4 = a0.read;
  Any a2 = ( FUNCPARAMS_ONE a4.f.ptr )(a1);
  return a2;
}

int main (){
  Any a2 = Fptr( &x1x_f, 1 );
  Reader a3 = { a2 };
  Any a7 = Int(1);
  Any a5 = x1x_m ( a3, a7 );
  Any a11 = toStr ( a5 );
  println ( a11 );
  return 0;
}
