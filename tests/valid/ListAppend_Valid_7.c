#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"

int main (){
  Any a2 = Int(1);
  Any a3 = Int(2);
  Any a4[] = {a2, a3};
  Any a6 = Int(3);
  Any a7 = Int(4);
  Any a8[] = {a6, a7};
  #### appending arrays not yet catered for;
  Any *a9 = Null();
  Any *a17 = a9;
  Any a16 = toStr ( a17 );
  println ( a16 );
  return 0;
}
