#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"

int main (){
  Any a2 = Real(5.0);
  Any a1 = a2;
  Any a6 = a1;
  println ( a6 );
  Any a7 = Real(3.234);
  a1 = a7;
  Any a11 = a1;
  println ( a11 );
  Any a12 = Real(5.242325252);
  a1 = a12;
  Any a16 = a1;
  println ( a16 );
  Any a17 = Real(-1.0);
  a1 = a17;
  Any a21 = a1;
  println ( a21 );
  Any a22 = Real(-1.232);
  a1 = a22;
  Any a26 = a1;
  println ( a26 );
  return 0;
}
