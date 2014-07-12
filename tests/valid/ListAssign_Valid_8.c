#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"

int main (){
  Any a2 = Int(1);
  Any a3 = Int(2);
  Any a4 = Int(3);
  Any a5[] = {a2, a3, a4};
  Any a6 = Int(0);
  Any a7[] = {a6};
  Any a8[] = {a5, a7};
  Any *a1 = a8;
  Any *a10 = a1;
  Any *a9 = a10;
  Any a11 = Int(0);
  Any a12 = Int(3);
  Any a13 = Int(4);
  Any a14 = Int(5);
  Any a15[] = {a12, a13, a14};
