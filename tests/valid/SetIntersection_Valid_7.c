#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"

int main (){
  Any a2 = Int(1);
  Any a3 = Int(21);
  Any a4 = Int(3);
  Any a5 = Int(4);
  Any a6 = Int(1);
  Any a1 = @ignore;
  Any a9 = Int(2);
  Any a10 = Int(2);
  Any a11 = Int(3);
  Any a12 = Int(4);
  Any a13 = Int(9);
  Any a16 = Real(-1.0);
  Any a17 = Int(25);
  Any a18 = Bool(true);
  Any a19 = Int(7);
  Any a20 = Real(13.4);
  Any a21 = Bool(false);
  Any a15 = @ignore;
