#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef int sr3nat;


int main (){
  Any a2 = Int(1);
  Any a3[] = {a2};
  Any *a1 = a3;
  Any a4 = Int(0);
  Any a5 = Int(1);
