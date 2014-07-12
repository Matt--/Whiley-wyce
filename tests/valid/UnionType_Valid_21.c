#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef 
Any f ( Any );

Any f ( Any a0 ){
  Any a2 = Int(0);
  label19: ;
  if ( dataAsInt( a0 ) > dataAsInt( a2 ) ) { goto label17; };
  Any a3 = Int(0);
  label18: ;
  if(a3.type == ){ goto label18; };
  Any a6 = Int(0);
  if(a3.type == ){ goto label19; };
  return a3;
  label17: ;
  a6 = Int(1);
  Any a7 = sub( a0 , a6);
  Any *a4 = f ( a7 );
  if(a4.type == ){ goto label18; };
  a7 = Int(0);
  if(a4.type == ){ goto label19; };
  return a4;
}

int main (){
  Any a3 = Int(2);
  Any *a2 = f ( a3 );
  Any *a1 = a2;
  Any *a8 = a1;
  Any a7 = toStr ( a8 );
  println ( a7 );
  return 0;
}
