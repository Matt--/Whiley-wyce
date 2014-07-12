#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef int sr8nat;
typedef record XXX sr8tup;


int main (){
  Any a2 = Int(1);
  Any a3 = Int(3);
  Any a5 = Int(4);
  Any a6 = Int(8);
  Any a8[] = {a4, a7};
  Any a1 = a8;
  Any a9 = Int(0);
  Any a10 = Int(2);
