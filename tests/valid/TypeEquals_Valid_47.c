#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef int nat;
typedef 
Any f ( Any );

Any f ( Any a0 ){
  if(a0.type == ){ goto label679; };
  if(a0.type == ){ goto label680; };
  Any a2 = Int(0);
  label680: ;
  if ( dataAsInt( a0 ) < dataAsInt( a2 ) ) { goto label681; };
  label679: ;
  goto label682;
  label681: ;
  goto label683;
  label682: ;
  Any a1 = Int(0);
  return a1;
  label683: ;
  return a0;
}

int main (){
  Any a5 = Int(1);
  Any a4 = f ( a5 );
  println ( a4 );
  Any a10 = Int(1);
  Any a11 = neg(a10);
  Any a9 = f ( a11 );
  println ( a9 );
  Any a16 = Int(1);
  Any a17 = Int(2);
  Any a18 = Int(3);
  Any a19[] = {a16, a17, a18};
  Any a15 = f ( a19 );
  println ( a15 );
  return 0;
}
