#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"

int main (){
  Any a2 = Int(1);
  Any a3 = Int(2);
  Any a4[] = {a2, a3};
  Any a5 = Int(3);
  Any a6 = Int(4);
  Any a7[] = {a5, a6};
  #### appending arrays not yet catered for;
  Any *a1 = null;
  Any *a13 = a1;
  Any a12 = toStr ( a13 );
  println ( a12 );
  return 0;
}
