#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef int a_nat;
typedef int b_nat;

Any x1x_f ( Any );

Any x1x_f ( Any a0 ){
  Any a2 = Int(0);
  if ( dataAsInt( a0 ) != dataAsInt( a2 ) ) { goto label45; };
  Any a3 = Int(1);
  Any a5 = Int(2);
  Any a7 = wyce_mul( a5 , a3);
  return a3;
  label45: ;
  Any a6 = Int(1);
  a7 = wyce_sub( a0 , a6);
  Any a11 = Int(0);
  Any a4 = x1x_f ( a7 );
  a6 = Int(2);
  Any a8 = wyce_mul( a6 , a4);
  return a4;
}

int main (){
