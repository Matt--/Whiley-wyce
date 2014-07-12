#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef int a_nat;
typedef int b_nat;

Any x1x_f ( Any );

Any x1x_f ( Any a0 ){
  Any a2 = Int(0);
  if ( dataAsInt( a0 ) != dataAsInt( a2 ) ) { goto label46; };
  Any a3 = Int(1);
  return a3;
  label46: ;
  Any a6 = Int(1);
  Any a7 = wyce_sub( a0 , a6);
  Any a4 = x1x_f ( a7 );
  return a4;
}

int main (){
