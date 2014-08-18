#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef int tenup;
typedef struct {Any data; Any op; } msg1;
typedef struct {Any index; } msg2;

Any x1x_f ( Any );

Any x1x_f ( Any a0 ){
  Any *a2 = a0;
  Any a1 = toStr ( a2 );
  return a1;
}

int main (){
  Any a2 [10];
  label652: ;
  Any a3 = Int(11);
  Any a1 = Null();
  label651: ;
  Any a9 = a1;
  if( !a9.type == ){ goto label651; };
  Any a12 = a9.op;
  Any a14 = Int(10);
  if(a9.type == ){ goto label652; };
  Any a8 = x1x_f ( a9 );
  println ( a8 );
  return 0;
}
