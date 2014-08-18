#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef int nat;
typedef int pos;

Any x1x_f ( Any );

Any x1x_f ( Any a0 ){
  Any a2 = a0;
  label80: ;
  Any a1 = a2;
  Any a3 = a1;
  label79: ;
  if( !a3.type == INT_TYPE){ goto label79; };
  Any a6 = Int(0);
  if(a3.type == ){ goto label80; };
  return a3;
}

int main (){
  Any a3 = Int(1);
  label82: ;
  Any a4 = Int(2);
  label81: ;
  Any a6 = Int(1);
  Any a7;
  
  if( !a7.type == INT_TYPE){ goto label81; };
  Any a11 = Int(0);
  if(a7.type == ){ goto label82; };
  Any a2 = x1x_f ( a7 );
  Any a1 = a2;
  Any a12 = a1;
  a11 = toStr ( a12 );
  println ( a11 );
  return 0;
}
