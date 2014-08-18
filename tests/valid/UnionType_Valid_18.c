#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef int utr12nat;
typedef struct {Any il; Any op; } tupper;

Any x1x_f ( tupper );

Any x1x_f ( tupper a0 ){
  Any a2 = a0.op;
  Any a7 = Int(0);
  return a2;
}

int main (){
  Any a2 = Int(1);
  label140: ;
  Any a3 = Int(1);
  label139: ;
  Any a1 = Null();
  Any a9 = a1;
  Any a8 = toStr ( a9 );
  println ( a8 );
  Any a10 = a1;
  Any *a13 = a10.il;
  if( !a13.type == INT_TYPE){ goto label139; };
  Any a15 = Int(0);
  if(a13.type == ){ goto label140; };
  a13 = a10.op;
  Any a16 = Int(0);
  Any a18 = Int(5);
  return 0;
}
