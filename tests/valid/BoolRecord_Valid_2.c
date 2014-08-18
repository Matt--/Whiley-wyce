#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"

int main (){
  Any a2 = Int(0);
  Any a3 = Bool(true);
  typedef struct {Any code; Any flag; }Record4;
  Record4 a4 = { a2, a3 };
  Any a6 = a4.flag;
  Any a7 = Bool(true);
  if ( dataAsInt( a6 ) == dataAsInt( a7 ) ) { goto label143; };
  goto label144;
  label143: ;
  Any a11 = Str("GOT HERE");
  println ( a11 );
  label144: ;
  return 0;
}
