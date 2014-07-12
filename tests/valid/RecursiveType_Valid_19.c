#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef int nat;
typedef int pos;
typedef typedef 
Any f ( Any );

Any f ( Any a0 ){
  Any a2 = a0;
  label127: ;
  Any a1 = a2;
  Any a3 = a1;
  label126: ;
  if(a3.type == ){ goto label126; };
  Any a6 = Int(0);
  if(a3.type == ){ goto label127; };
  return a3;
}

int main (){
  Any a3 = Int(1);
  label129: ;
  Any a4 = Int(2);
  label128: ;
  Any a6 = Int(1);
  if(a7.type == ){ goto label128; };
  Any a11 = Int(0);
  if(a7.type == ){ goto label129; };
  Any a2 = f ( a7 );
  Any a1 = a2;
  Any a12 = a1;
  a11 = toStr ( a12 );
  println ( a11 );
  return 0;
}
