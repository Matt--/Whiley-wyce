#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"

int main (){
  Any a2 = Int(0);
  Any a3 = Bool(true);
  typedef struct {Any code; Any flag; }Record4;
  Record4 a4 = { a2, a3 };
  Any a8 = recordToStr2( "code", a4.code, "flag", a4.flag);
  println ( a8 );
  Any a10 = Bool(false);
  a4.flag = a10;
  Any a14 = recordToStr2( "code", a4.code, "flag", a4.flag);
  println ( a14 );
  return 0;
}
