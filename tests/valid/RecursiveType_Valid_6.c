#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef struct {Any left; Any op; Any right; } binop;


int main (){
  Any a2 = Int(123);
  Any a6 = toStr ( a2 );
  println ( a6 );
  return 0;
}
