#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"

int main (){
  Any a2 = Int(1);
  Any a3 = Int(2);
  Any a4 = Int(3);
  Any a5 = Int(3);
  Any a6 = Int(3);
  Any a7 = Int(4);
  Any a8[] = {a2, a3, a4, a5, a6, a7};
  Any a9 = Int(1);
