#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef struct {Any x; Any y; } bop;

Any x1x_f ( Any );

Any x1x_f ( Any a0 ){
  if(a0.type == INT_TYPE){ goto label2; };
  goto label3;
  label2: ;
  Any a1 = Str("GOT INT");
  return a1;
  label3: ;
  Any a2 = Str("GOT BOB");
  return a2;
}

int main (){
  Any a2 = Int(1);
  Any a1 = a2;
  label5: ;
  Any a7 = a1;
  label4: ;
  if(a7.type == INT_TYPE){ goto label4; };
  if( !a7.type == ){ goto label5; };
  Any a11 = a7.x;
  Any a13 = Int(0);
  Any a6 = x1x_f ( a7 );
  println ( a6 );
  Any a8 = Int(1);
  Any a9 = Int(2);
  bop a10 = { a8, a9 };
  a1 = a10;
  bop a15 = a1;
  if(a15.type == INT_TYPE){ goto label4; };
  if( !a15.type == ){ goto label5; };
  Any a19 = a15.x;
  Any a21 = Int(0);
  Any a14 = x1x_f ( a15 );
  println ( a14 );
  return 0;
}
