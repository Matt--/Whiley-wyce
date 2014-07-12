#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"

int main (){
  Any a2 = Int(200);
  Any a1 = a2;
  Any a6 = a1;
  println ( a6 );
  Any a7 = Int(1);
  a1 = a7;
  Any a11 = a1;
  println ( a11 );
  Any a12 = Int(0);
  a1 = a12;
  Any a16 = a1;
  println ( a16 );
  Any a17 = Int(24343);
  a1 = a17;
  Any a21 = a1;
  println ( a21 );
  Any a22 = Int(2143);
  a1 = a22;
  Any a26 = a1;
  println ( a26 );
  Any a27 = Int(2143);
  a1 = a27;
  Any a31 = a1;
  println ( a31 );
  return 0;
}
