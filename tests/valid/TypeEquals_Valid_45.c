#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef int pos;
typedef int neg;
typedef 
Any f ( Any );

Any f ( Any a0 ){
  if(a0.type == INT_TYPE){ goto label668; };
  goto label669;
  label668: ;
  return a0;
  label669: ;
  Any a2 = Int(1);
  return a2;
}

int main (){
  Any a3 = Int(1);
  label674: ;
  Any a4 = Int(2);
  Any a5 = Int(3);
  label673: ;
  Any a6[] = {a3, a4, a5};
  if(a6.type == ){ goto label670; };
  Any a10 = Int(0);
  label670: ;
  if ( dataAsInt( a6 ) <= dataAsInt( a10 ) ) { goto label671; };
  goto label672;
  label671: ;
  if(a6.type == ){ goto label673; };
  a10 = Int(0);
  if(a6.type == ){ goto label674; };
  label672: ;
  Any a2 = f ( a6 );
  Any a1 = a2;
  Any a11 = a1;
  a10 = toStr ( a11 );
  println ( a10 );
  Any a13 = Int(123);
  if(a13.type == ){ goto label670; };
  Any a17 = Int(0);
  if ( dataAsInt( a13 ) <= dataAsInt( a17 ) ) { goto label675; };
  goto label676;
  label675: ;
  if(a13.type == ){ goto label673; };
  a17 = Int(0);
  if(a13.type == ){ goto label674; };
  label676: ;
  Any a12 = f ( a13 );
  a1 = a12;
  Any a18 = a1;
  a17 = toStr ( a18 );
  println ( a17 );
  return 0;
}
