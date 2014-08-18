#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"

int main (){
  Any a2 = Int(200);
  println ( a2 );
  Any a7 = Int(1);
  a2 = a7;
  println ( a2 );
  Any a12 = Int(0);
  a2 = a12;
  println ( a2 );
  Any a17 = Int(24343);
  a2 = a17;
  println ( a2 );
  Any a22 = Int(2143);
  a2 = a22;
  println ( a2 );
  Any a27 = Int(2143);
  a2 = a27;
  println ( a2 );
  return 0;
}
