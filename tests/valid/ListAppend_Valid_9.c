#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"

int main (){
  Any a2 = Int(1);
  Any a3 = Int(2);
  Any a4 = Int(3);
  Any a5[] = {a2, a3, a4};
  Any *a1 = a5;
  Any a7 = Real(4.23);
  Any a8 = Real(5.5);
  Any a9[] = {a7, a8};
  Any *a6 = a9;
  Any *a10 = a6;
  Any *a11 = a1;
  #### appending arrays not yet catered for;
  a6 = null;
  Any a17 = a6;
  Any a16 = toStr ( a17 );
  println ( a16 );
  return 0;
}
