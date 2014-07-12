#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
Any g ( Any );
Any* f ( Any );

Any g ( Any a0 ){
  Any a2 = Int(0);
  if ( dataAsInt( a0 ) <= dataAsInt( a2 ) ) { goto label584; };
  Any a4 = Int(125);
  if ( dataAsInt( a0 ) < dataAsInt( a4 ) ) { goto label585; };
  label584: ;
  Any a5 = Int(1);
  return a5;
  label585: ;
  return a0;
}

Any* f ( Any a0 ){
  Any a1 = g ( a0 );
  Any a3[] = {a1};
  return a3;
}

int main (){
  Any a3 = Int(0);
  Any *a2 = f ( a3 );
  Any *a1 = a2;
  Any *a8 = a1;
  Any a7 = toStr ( a8 );
  println ( a7 );
  return 0;
}
