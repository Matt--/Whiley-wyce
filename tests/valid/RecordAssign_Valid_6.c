#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"

int main (){
  Any a2 = Int(2);
  Any a3 = Int(3);
  Any a1 = null;
  Any a6 = Int(1);
  Any a7 = Int(3);
  Any a5 = null;
  Any a13 = a1;
  Any a12 = toStr ( a13 );
  println ( a12 );
  Any a18 = a5;
  Any a17 = toStr ( a18 );
  println ( a17 );
  Any a21 = Int(1);
