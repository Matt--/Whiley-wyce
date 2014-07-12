#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"

int main (){
  Any a2 = Int(1);
  Any a3 = Int(2);
  Any a4 = Int(3);
  Any a7 = Int(2);
  Any a8 = Int(3);
  Any a9 = Int(4);
  Any a10[] = {a7, a8, a9};
  Any *a6 = a10;
  Any *a13 = a6;
