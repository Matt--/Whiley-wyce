#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"

int main (){
  Any a2 = Int(1);
  switch( a2.i ){
    case 1 : goto label207;
    case 2 : goto label208;
    default : goto label206;
  }
  label207: ;
  Any a7 = Str("CASE 1");
  println ( a7 );
  return 0;
  label208: ;
  Any a11 = Str("CASE 2");
  println ( a11 );
  label206: ;
  return 0;
  Any a15 = Str("DEFAULT CASE");
  println ( a15 );
  return 0;
}
