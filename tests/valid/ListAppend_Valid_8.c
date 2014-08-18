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
  Any *a5 = a8;
  #### appending arrays not yet catered for;
  Any *a9 = Null();
  Any a14 = Int(6);
  Any a15[] = {a14};
  #### appending arrays not yet catered for;
  Any *a1 = Null();
  Any *a21 = a1;
  Any a20 = toStr ( a21 );
  println ( a20 );
  Any *a26 = a5;
  Any a25 = toStr ( a26 );
  println ( a25 );
  Any *a31 = a9;
  Any a30 = toStr ( a31 );
  println ( a30 );
  return 0;
}
