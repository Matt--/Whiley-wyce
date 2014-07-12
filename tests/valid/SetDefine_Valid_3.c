#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef pintset;


int main (){
  Any a2 = Char('b');
  Any a3 = Char('c');
  Any a1 = @ignore;
  Any a9 = a1;
  Any a8 = toStr ( a9 );
  println ( a8 );
  return 0;
}
